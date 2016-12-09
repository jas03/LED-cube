/*
 * Alex Mendez
 * Portland State University
 * ECE 411
 * October 30, 2016
 * 
 * Description:
 * This program takes an audio input and splits the audio signal into 7
 * bands that each control a distinct portion of a 3x3x3 LED cube. The
 * strength of each band dictates the brightness of the lights. This is
 * currently a tech demo and does not resemble the final product.
 
 to turn off
 
    PORTD |= _BV(PD6);  //layer 1
    PORTD |= _BV(PD7);  //layer 2
    PORTB |= _BV(PB0);  //layer 3
   
to turn on

    PORTD &= ~_BV(PD6);  //layer 1
    PORTD &= ~_BV(PD7);  //layer 2
    PORTB &= ~_BV(PB0);  //layer 3
 */

#include "Tlc5940.h"

#define LayerOne 6      // PD6 (pin 11 of chip)
#define LayerTwo 7      //  PD7 (pin 12 of chip)
#define LayerThree 8    //   PB0 (pin 13 of chip)

#define analogPin 0     // read from multiplexer using analog input 0
#define strobePin 2     // strobe is attached to digital pin 2
#define resetPin 4      // reset is attached to digital pin 3
#define THRESH 100       // threshold level
#define BASENERF 2       // nerfing brightness of base colors
#define AUDIONERF 1.5    // nerfing brightness of audio

//red pins 
#define REDPIN1 1
#define REDPIN2 2
#define REDPIN3 3
#define REDPIN4 4
#define REDPIN5 5
#define REDPIN6 6
#define REDPIN7 7
#define REDPIN8 8
#define REDPIN9 9

//green pins
#define GREENPIN1 10
#define GREENPIN2 11
#define GREENPIN3 12
#define GREENPIN4 13
#define GREENPIN5 14
#define GREENPIN6 17
#define GREENPIN7 18
#define GREENPIN8 19
#define GREENPIN9 20

//blue pins
#define BLUEPIN1 21
#define BLUEPIN2 22
#define BLUEPIN3 23
#define BLUEPIN4 24
#define BLUEPIN5 25
#define BLUEPIN6 26
#define BLUEPIN7 27
#define BLUEPIN8 28
#define BLUEPIN9 29

#define LITTLEBIAS 10
#define BIGBIAS 10
#define SHOVEBIAS 20
//BIGBIAS > LITTLEBIAS
//SHOVEBIAS > BIGBIAS

#define REDLOWLIM 250
#define REDHIGHLIM 950

#define GREENLOWLIM 50
#define GREENHIGHLIM 600

#define BLUELOWLIM 50
#define BLUEHIGHLIM 700

int spectrumValue[7];   // to hold a2d values

//set up the base colors
int rd = 750; int bias_nr = -BIGBIAS; int bias_pr = BIGBIAS;
int gr = 500; int bias_ng = -BIGBIAS; int bias_pg = BIGBIAS;
int bl = 250; int bias_nb = -BIGBIAS; int bias_pb = BIGBIAS;
int jack = 2;
int blankSlate;


void setup() {
  // put your setup code here, to run once:
 //msg setup
 //Serial.begin(115200);
 pinMode(analogPin, INPUT);
 pinMode(strobePin, OUTPUT);
 pinMode(resetPin, OUTPUT);
 analogReference(EXTERNAL);

 digitalWrite(resetPin, LOW);
 digitalWrite(strobePin, HIGH);


 //tlc setup
 pinMode(LayerOne, OUTPUT);
 pinMode(LayerTwo, OUTPUT);
 pinMode(LayerThree, OUTPUT);
  
 Tlc.init();
 digitalWrite(LayerOne, HIGH);
 digitalWrite(LayerTwo, HIGH);
 digitalWrite(LayerThree, HIGH);
}


void loop() {

 digitalWrite(resetPin, HIGH);
 digitalWrite(resetPin, LOW);

 for (int i = 0; i < 7; i++)
 {
  digitalWrite(strobePin, LOW);
  delayMicroseconds(15); // to allow the output to settle
  spectrumValue[i] = analogRead(analogPin);
  if (spectrumValue[i] < THRESH){
  spectrumValue[i] = 0;
 }
 //Serial.print(spectrumValue[i]);
 //Serial.print(" ");
 digitalWrite(strobePin, HIGH);
}
 
  //base color generation
if ((rd > REDLOWLIM) && (rd < REDHIGHLIM))
  {rd = rd + random(bias_nr, bias_pr);}
else if (rd < REDLOWLIM)
  {
    rd = REDLOWLIM + SHOVEBIAS;
    bias_nr = -LITTLEBIAS;
    bias_pr = BIGBIAS;
  }
else //rd > REDHIGHLIM
  {
    rd = REDHIGHLIM - SHOVEBIAS;
    bias_nr = -BIGBIAS;
    bias_pr = LITTLEBIAS;
  } 
//Serial.print(rd);
//Serial.print(" ");

if ((gr > GREENLOWLIM) && (gr < GREENHIGHLIM))
  {gr = gr + random(bias_ng, bias_pg);}
else if (gr < GREENLOWLIM)
  {
    gr = GREENLOWLIM + SHOVEBIAS;
    bias_ng = -LITTLEBIAS;
    bias_pg = BIGBIAS;
  }
else //gr > GREENHIGHLIM
  {
    gr = GREENHIGHLIM - SHOVEBIAS;
    bias_ng = -BIGBIAS;
    bias_pg = LITTLEBIAS;
  } 
//Serial.print(gr);
//Serial.print(" ");

if ((bl > BLUELOWLIM) && (bl < BLUEHIGHLIM))
  {bl = bl + random(bias_nb, bias_pb);}
else if (bl < BLUELOWLIM)
  {
    bl = BLUELOWLIM + SHOVEBIAS;
    bias_nb = -LITTLEBIAS;
    bias_pb = BIGBIAS;
  }
else //bl > BLUEHIGHLIM
  {
    bl = BLUEHIGHLIM - SHOVEBIAS;
    bias_nb = -BIGBIAS;
    bias_pb = LITTLEBIAS;
  }  
//Serial.print(bl);
//Serial.print(" \n");


//red = 1-9 (center is 5)
//green = 10-14, 17-20 (center is 14)
//blue = 21-29 (center is 25, 21 and 22 are merged)

//Start putting those colors on the cube
 PORTD |= _BV(PD6);  //layer 1 LOW
 PORTD &= ~_BV(PD7);  //layer 2 HIGH
 PORTB &= ~_BV(PB0);  //layer 3 HIGH
//Tlc.clear();

 //red, layer 1
Tlc.set(REDPIN1, spectrumValue[0]);
Tlc.set(REDPIN2, spectrumValue[0]);
Tlc.set(REDPIN3, spectrumValue[0]);
Tlc.set(REDPIN4, spectrumValue[0]);
Tlc.set(REDPIN5, spectrumValue[0]);
Tlc.set(REDPIN6, spectrumValue[0]);
Tlc.set(REDPIN7, spectrumValue[0]);
Tlc.set(REDPIN8, spectrumValue[0]);
Tlc.set(REDPIN9, spectrumValue[0]);

 //green, layer 1
 Tlc.set(GREENPIN1, gr);
 Tlc.set(GREENPIN2, spectrumValue[1]/AUDIONERF);
 Tlc.set(GREENPIN3, gr);
 Tlc.set(GREENPIN4, spectrumValue[1]/AUDIONERF);
 Tlc.set(GREENPIN5, spectrumValue[1]/AUDIONERF);
 Tlc.set(GREENPIN6, spectrumValue[1]/AUDIONERF);
 Tlc.set(GREENPIN7, gr);
 Tlc.set(GREENPIN8, spectrumValue[1]/AUDIONERF);
 Tlc.set(GREENPIN9, gr);
 
 //blue, layer 1
 Tlc.set (BLUEPIN1, bl);
 Tlc.set (BLUEPIN2, bl);
 Tlc.set (BLUEPIN3, bl);
 Tlc.set (BLUEPIN4, bl);
 Tlc.set (BLUEPIN5, bl);
 Tlc.set (BLUEPIN6, bl);
 Tlc.set (BLUEPIN7, bl);
 Tlc.set (BLUEPIN8, bl);
 Tlc.set (BLUEPIN9, bl);
 
 
 Tlc.update();
 delay(jack);
 PORTD &= ~_BV(PD6);  //layer 1 HIGH
 PORTD |= _BV(PD7);  //layer 2 LOW
 PORTB &= ~_BV(PB0);  //layer 3 HIGH

 //Tlc.clear();

//blue, layer 2
Tlc.set(BLUEPIN1, spectrumValue[4]/AUDIONERF);
Tlc.set(BLUEPIN2, bl/BASENERF);
Tlc.set(BLUEPIN3, spectrumValue[4]/AUDIONERF);
Tlc.set(BLUEPIN4, bl/BASENERF);
Tlc.set(BLUEPIN5, bl/BASENERF);
Tlc.set(BLUEPIN6, bl/BASENERF);
Tlc.set(BLUEPIN7, spectrumValue[4]/AUDIONERF);
Tlc.set(BLUEPIN8, bl/BASENERF);
Tlc.set(BLUEPIN9, spectrumValue[4]/AUDIONERF);

//green, layer 2
Tlc.set(GREENPIN1, gr);
Tlc.set(GREENPIN2, spectrumValue[3]/AUDIONERF);
Tlc.set(GREENPIN3, gr);
Tlc.set(GREENPIN4, spectrumValue[3]/AUDIONERF);
Tlc.set(GREENPIN5, gr);
Tlc.set(GREENPIN6, spectrumValue[3]/AUDIONERF);
Tlc.set(GREENPIN7, gr);
Tlc.set(GREENPIN8, spectrumValue[3]/AUDIONERF);
Tlc.set(GREENPIN9, gr);

//red, layer 2
Tlc.set(REDPIN1, spectrumValue[2]);
Tlc.set(REDPIN2, rd/BASENERF);
Tlc.set(REDPIN3, spectrumValue[2]);
Tlc.set(REDPIN4, rd/BASENERF);
Tlc.set(REDPIN5, rd);
Tlc.set(REDPIN6, rd/BASENERF);
Tlc.set(REDPIN7, spectrumValue[2]);
Tlc.set(REDPIN8, rd/BASENERF);
Tlc.set(REDPIN9, spectrumValue[2]);

Tlc.update();
delay(jack);
 PORTD &= ~_BV(PD6);  //layer 1 HIGH
 PORTD &= ~_BV(PD7);  //layer 2 HIGH
 PORTB |= _BV(PB0);  //layer 3 LOW
//Tlc.clear();

//no blue layer 3
Tlc.set(BLUEPIN1, spectrumValue[6]/AUDIONERF);
Tlc.set(BLUEPIN2, spectrumValue[6]/AUDIONERF);
Tlc.set(BLUEPIN3, spectrumValue[6]/AUDIONERF);
Tlc.set(BLUEPIN4, spectrumValue[6]/AUDIONERF);
Tlc.set(BLUEPIN5, spectrumValue[6]/AUDIONERF);
Tlc.set(BLUEPIN6, spectrumValue[6]/AUDIONERF);
Tlc.set(BLUEPIN7, spectrumValue[6]/AUDIONERF);
Tlc.set(BLUEPIN8, spectrumValue[6]/AUDIONERF);
Tlc.set(BLUEPIN9, spectrumValue[6]/AUDIONERF);
//spectrumValue[6]/AUDIONERF

//green, layer 3
Tlc.set(GREENPIN1, gr/BASENERF);
Tlc.set(GREENPIN2, spectrumValue[5]/AUDIONERF);
Tlc.set(GREENPIN3, gr/BASENERF);
Tlc.set(GREENPIN4, spectrumValue[5]/AUDIONERF);
Tlc.set(GREENPIN5, spectrumValue[5]/AUDIONERF);
Tlc.set(GREENPIN6, spectrumValue[5]/AUDIONERF);
Tlc.set(GREENPIN7, gr/BASENERF);
Tlc.set(GREENPIN8, spectrumValue[5]/AUDIONERF);
Tlc.set(GREENPIN9, gr/BASENERF);

//red, layer 3
Tlc.set(REDPIN1, rd*2);
Tlc.set(REDPIN2, rd);
Tlc.set(REDPIN3, rd*2);
Tlc.set(REDPIN4, rd);
Tlc.set(REDPIN5, rd);
Tlc.set(REDPIN6, rd);
Tlc.set(REDPIN7, rd*2);
Tlc.set(REDPIN8, rd);
Tlc.set(REDPIN9, rd*2);

Tlc.update();
delay(jack);
}
