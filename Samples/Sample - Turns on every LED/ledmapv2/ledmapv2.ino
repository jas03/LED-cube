//Matthew Konyndyk
//Portland State University
//ECE 411 

/* 
 *  Example that tests leds by lighting up every led on a 3x3x3 rgb led cube
 */

#include "Tlc5940.h"

#define LayerOne 6 //PD6 (pin 11 of chip)
#define LayerTwo 7 //PD7 (pin 12 of chip)
#define LayerThree 8 //PB0 (pin 13 of chip)





void setup()
{
  /* Call Tlc.init() to setup the tlc.
     You can optionally pass an initial PWM value (0 - 4095) for all channels.*/

  Tlc.init();
     
  pinMode(LayerOne, OUTPUT);
  pinMode(LayerTwo, OUTPUT);
  pinMode(LayerThree, OUTPUT);

  digitalWrite(LayerOne, HIGH);
  digitalWrite(LayerTwo, HIGH);
  digitalWrite(LayerThree, HIGH); 
}








//The B bank is digital pins 8 - 13.
//The C bank is the analog input pins.
//Bank D is pins 0 - 7.

//PORTD |= _BV(PD6); to turn LayerOne high
//PORTD &= ~_BV(PD6); to tern LayerOne low
//PORTD |= _BV(PD7); to turn LayerTwo high
//PORTD &= ~_BV(PD7); to tern LayerTwo low
//PORTB |= _BV(PB0); to turn LayerThree high
//PORTB &= ~_BV(PB0); to tern LayerThree low








void loop (){

PORTD |= _BV(PD6); //to turn LayerOne high      //set all layers off
PORTD |= _BV(PD7); //to turn LayerTwo high
PORTB |= _BV(PB0); //to turn LayerThree high 
delay(10);
PORTD &= ~_BV(PD6);     //Turn layer one low

Tlc.set(26, 10);                                //set all leds
for(int i = 0; i <=26; i++){   
  Tlc.set(i, 2000);
  if(i>=1)  Tlc.set(i-1, 10);
Tlc.update(); //update
delay(100);
}





PORTD |= _BV(PD6); //to turn LayerOne high      //set all layers off
PORTD |= _BV(PD7); //to turn LayerTwo high
PORTB |= _BV(PB0); //to turn LayerThree high 
delay(10);
PORTD &= ~_BV(PD7);     //Turn layer two low

Tlc.set(26, 10);                                //set all leds
for(int i = 0; i <=26; i++){   
  Tlc.set(i, 2000);
  if(i>=1)  Tlc.set(i-1, 10);
Tlc.update(); //update
delay(100);
}



PORTD |= _BV(PD6); //to turn LayerOne high      //set all layers off
PORTD |= _BV(PD7); //to turn LayerTwo high
PORTB |= _BV(PB0); //to turn LayerThree high 
delay(10);
PORTB &= ~_BV(PB0);     //Turn layer one low

Tlc.set(26, 10);                                //set all leds
for(int i = 0; i <=26; i++){   
  Tlc.set(i, 2000);
  if(i>=1)  Tlc.set(i-1, 10);
Tlc.update(); //update
delay(100);
}

  
}
