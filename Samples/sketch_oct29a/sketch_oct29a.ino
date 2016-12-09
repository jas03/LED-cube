//Matthew Konyndyk
//Portland State University
//ECE 411 

/* 
 *  Example that tests leds by lighting up every led on a 3x3x3 rgb led cube
 */

#include "Tlc5940.h"

#define LayerOne 6  // D6
#define LayerTwo 7     //  D7
#define LayerThree 8    //   D8

void setup()
{
  /* Call Tlc.init() to setup the tlc.
     You can optionally pass an initial PWM value (0 - 4095) for all channels.*/
  pinMode(LayerOne, OUTPUT);
  pinMode(LayerTwo, OUTPUT);
  pinMode(LayerThree, OUTPUT);
  
  Tlc.init();

  digitalWrite(LayerOne, HIGH);
  digitalWrite(LayerTwo, HIGH);
  digitalWrite(LayerThree, HIGH); 
}

void loop(){

//begin layer 1
  digitalWrite(LayerOne, LOW);
  digitalWrite(LayerTwo, HIGH);
  digitalWrite(LayerThree, HIGH);
//red leds
for(int i = 0; i <=9; i++){ 
  Tlc.set(i, 0);}
//green leds
for(int i = 10; i <=20 ; i++){
  Tlc.set(i, 100); }
//blue leds
for(int i = 21; i <=31; i++){
  Tlc.set(i, 0); }
  Tlc.update();

 //end layer one

 delay(1);


 //begin layer 2
   digitalWrite(LayerOne, HIGH);
  digitalWrite(LayerTwo, LOW);
  digitalWrite(LayerThree, HIGH);
//red leds
for(int i = 0; i <=9; i++){ 
  Tlc.set(i, 400);}
//green leds
for(int i = 10; i <=20 ; i++){
  Tlc.set(i, 0); }
//blue leds
for(int i = 21; i <=31; i++){
  Tlc.set(i, 0); }
  Tlc.update();

 //end layer two

delay(1);


 //begin layer 3
   digitalWrite(LayerOne, HIGH);
  digitalWrite(LayerTwo, HIGH);
  digitalWrite(LayerThree, LOW);
//red leds
for(int i = 0; i <=9; i++){ 
  Tlc.set(i, 0);}
//green leds
for(int i = 10; i <=20 ; i++){
  Tlc.set(i, 0); }
//blue leds
for(int i = 21; i <=31; i++){
  Tlc.set(i, 100); }
  Tlc.update();

 //end layer one

delay(1);
  
} //end loop
  
