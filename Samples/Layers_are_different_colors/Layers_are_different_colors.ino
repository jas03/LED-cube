//Matthew Konyndyk
//Portland State University
//ECE 411 

/* 
 *  Example that tests leds by lighting up every layer on a 3x3x3 rgb led cube a different color
 */

#include "Tlc5940.h"

#define LayerOne 6 //PD6 (pin 11 of chip)
#define LayerTwo 7 //PD7 (pin 12 of chip)
#define LayerThree 8 //PB0 (pin 13 of chip)
#define delays 100



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





//PORTD |= _BV(PD6); to turn LayerOne high
//PORTD &= ~_BV(PD6); to tern LayerOne low

//PORTD |= _BV(PD7); to turn LayerTwo high
//PORTD &= ~_BV(PD7); to tern LayerTwo low

//PORTB |= _BV(PB0); to turn LayerThree high
//PORTB &= ~_BV(PB0); to tern LayerThree low


void loop (){
delay(delays);
Tlc.set(0, 500);
Tlc.set(1, 500);
Tlc.set(2, 500);
Tlc.set(3, 500);
Tlc.set(4, 500);
Tlc.set(5, 500);
Tlc.set(6, 500);
Tlc.set(7, 500);
Tlc.set(8, 500);
Tlc.set(9, 10);
Tlc.set(10, 10);
Tlc.set(11, 10);
Tlc.set(12, 10);
Tlc.set(13, 10);
Tlc.set(14, 10);
Tlc.set(15, 10);
Tlc.set(16, 10);
Tlc.set(17, 10);
Tlc.set(18, 10);
Tlc.set(19, 10);
Tlc.set(20, 10);
Tlc.set(21, 10);
Tlc.set(22, 10);
Tlc.set(23, 10);
Tlc.set(24, 10);
Tlc.set(25, 10);
Tlc.set(26, 10);
//delay(20);  //where does the delay go??
  digitalWrite(LayerOne, LOW);
  digitalWrite(LayerTwo, HIGH);
  digitalWrite(LayerThree, HIGH); 

// PORTD |= _BV(PD6); //to turn LayerOne high      //set all layers off
// PORTD |= _BV(PD7); //to turn LayerTwo high
// PORTB |= _BV(PB0); //to turn LayerThree high 
Tlc.update(); //update
// PORTD &= ~_BV(PD6);     //Turn layer one low



//layer 2
delay(delays);
Tlc.set(0, 10);
Tlc.set(1, 10);
Tlc.set(2, 10);
Tlc.set(3, 10);
Tlc.set(4, 10);
Tlc.set(5, 10);
Tlc.set(6, 10);
Tlc.set(7, 10);
Tlc.set(8, 10);
Tlc.set(9, 500);
Tlc.set(10, 500);
Tlc.set(11, 500);
Tlc.set(12, 500);
Tlc.set(13, 500);
Tlc.set(14, 500);
Tlc.set(15, 500);
Tlc.set(16, 500);
Tlc.set(17, 500);
Tlc.set(18, 10);
Tlc.set(19, 10);
Tlc.set(20, 10);
Tlc.set(21, 10);
Tlc.set(22, 10);
Tlc.set(23, 10);
Tlc.set(24, 10);
Tlc.set(25, 10);
Tlc.set(26, 10);
//delay(20);  //where does the delay go??
// PORTD |= _BV(PD6); //to turn LayerOne high      //set all layers off
// PORTD |= _BV(PD7); //to turn LayerTwo high
// PORTB |= _BV(PB0); //to turn LayerThree high 
  digitalWrite(LayerOne, HIGH);
  digitalWrite(LayerTwo, LOW);
  digitalWrite(LayerThree, HIGH); 


Tlc.update(); //update
// PORTD &= ~_BV(PD7);     //Turn layer two low*/





//layer 3
delay(delays);
Tlc.set(0, 10);
Tlc.set(1, 10);
Tlc.set(2, 10);
Tlc.set(3, 10);
Tlc.set(4, 10);
Tlc.set(5, 10);
Tlc.set(6, 10);
Tlc.set(7, 10);
Tlc.set(8, 10);
Tlc.set(9, 10);
Tlc.set(10, 10);
Tlc.set(11, 10);
Tlc.set(12, 10);
Tlc.set(13, 10);
Tlc.set(14, 10);
Tlc.set(15, 10);
Tlc.set(16, 10);
Tlc.set(17, 10);
Tlc.set(18, 500);
Tlc.set(19, 500);
Tlc.set(20, 500);
Tlc.set(21, 500);
Tlc.set(22, 500);
Tlc.set(23, 500);
Tlc.set(24, 500);
Tlc.set(25, 500);
Tlc.set(26, 500);
  digitalWrite(LayerOne, HIGH);
  digitalWrite(LayerTwo, HIGH);
  digitalWrite(LayerThree, LOW); 
//delay(20);  //where does the delay go??
/*PORTD |= _BV(PD6); //to turn LayerOne high      //set all layers off
PORTD |= _BV(PD7); //to turn LayerTwo high
PORTB |= _BV(PB0); //to turn LayerThree high */
Tlc.update(); //update
/*PORTB &= ~_BV(PB0);     //Turn layer two low*/
}
