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
 */

#include "Tlc5940.h"

#define LayerOne 6      // PD6 (pin 11 of chip)
#define LayerTwo 7      //  PD7 (pin 12 of chip)
#define LayerThree 8    //   PB0 (pin 13 of chip)

#define analogPin 0     // read from multiplexer using analog input 0
#define strobePin 2     // strobe is attached to digital pin 2
#define resetPin 4      // reset is attached to digital pin 3
#define THRESH 65       // threshold level
int spectrumValue[7];   // to hold a2d values

/*
 * To turn off a layer:

PORT_ |= _BV(___);  //layer 1

To turn on a layer:

PORT_ &= ~_BV(___);  //layer 1

where

_ = 'B' 'C' or 'D' depending on the pin

___ = the pin name
 * To turn off a layer:

PORTD |= _BV(PD6);  //layer 1

To turn on a layer:

PORTD &= ~_BV(PD6);  //layer 1
*/

void setup()
{

 //msg setup
 Serial.begin(9600);
 pinMode(analogPin, INPUT);
 pinMode(strobePin, OUTPUT);
 pinMode(resetPin, OUTPUT);
 analogReference(DEFAULT);

 digitalWrite(resetPin, LOW);
 digitalWrite(strobePin, HIGH);


 //tlc setup
 pinMode(LayerOne, OUTPUT);
 pinMode(LayerTwo, OUTPUT);
 pinMode(LayerThree, OUTPUT);
  
 Tlc.init();
/*
PORTD &= _BV(PD6);  //layer 1
PORTD &= _BV(PD7);  //layer 2
PORTB &= _BV(PB0);  //layer 3
*/
 digitalWrite(LayerOne, LOW);
 digitalWrite(LayerTwo, LOW);
 digitalWrite(LayerThree, LOW); 
}

void loop()
{
//PORTD |= ~_BV(PD4);  //reset high
//delayMicroseconds(20);
//PORTD &= _BV(PD4);  //reset low
 digitalWrite(resetPin, HIGH);
 digitalWrite(resetPin, LOW);

 for (int i = 0; i < 7; i++)
 {

//PORTD &= _BV(PD2);  //strobe low
 digitalWrite(strobePin, LOW);
 delayMicroseconds(26); // to allow the output to settle
 spectrumValue[i] = analogRead(analogPin);


 if ((i<=1) && (spectrumValue[i]>THRESH)) 
      Tlc.set(i+9,3*spectrumValue[i]);
 else
      Tlc.set(i+9, 0);
 if ((i<=5) && (spectrumValue[i]>THRESH))
      Tlc.set(i+20,3*spectrumValue[i]);
  else
      Tlc.set(i+20, 0);
 if ((i<=7) && (spectrumValue[i]>THRESH))
      Tlc.set(i+2,3*spectrumValue[i]);
  else
      Tlc.set(i+2, 0);
 Tlc.update();

//PORTD |= _BV(PD2);  //strobe high
//delayMicroseconds(30);
 digitalWrite(strobePin, HIGH);
 }
}
