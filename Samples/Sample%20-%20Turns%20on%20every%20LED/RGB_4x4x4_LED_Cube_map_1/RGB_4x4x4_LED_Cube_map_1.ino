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
  pinMode(LayerOne, OUTPUT);
  pinMode(LayerTwo, OUTPUT);
  pinMode(LayerThree, OUTPUT);
  
  Tlc.init(10);

  digitalWrite(LayerOne, LOW);
  digitalWrite(LayerTwo, HIGH);
  digitalWrite(LayerThree, HIGH); 
}


Tlc.set(26,0);
void loop(){
for(int i = 0; i <=26; i++){
  Tlc.set(i, 4000);
  if(i>=1)  Tlc.set(i-1, 10);
  Tlc.update();
  delay(500);

}
  
}
