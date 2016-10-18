

#include "Tlc5940.h"

#define LayerOne 17
#define LayerTwo 4
#define LayerThree 2

float CubeBrig = 0.5;
float CubeSat = 0.70;
int CubeRes = 2047;

int RedCal = 2048;
int GreenCal = -512;
int BlueCal = 768;

int LayerDuration = 4167;
int layer = 0;
unsigned long oldMicros = 0;

//float hueAAone = 0.00;
//float hueACone = 0.00;
//float hueCAone = 0.00;
//float hueCCone = 0.00;

//float hueAAthree = 0.00;
//float hueACthree = 0.00;
//float hueCAthree = 0.00;
//float hueCCthree = 0.00;

void setup()
{
  /* Call Tlc.init() to setup the tlc.
     You can optionally pass an initial PWM value (0 - 4095) for all channels.*/
  pinMode(LayerOne, OUTPUT);
  pinMode(LayerTwo, OUTPUT);
  pinMode(LayerThree, OUTPUT);
  
  Tlc.init(10);
  
  
  //digitalWrite(LayerOne, HIGH);
  //digitalWrite(LayerTwo, HIGH);
  //digitalWrite(LayerThree, HIGH);

}



void loop (){

digitalWrite(LayerOne, LOW);
digitalWrite(LayerTwo, HIGH);
digitalWrite(LayerThree, HIGH); 
for(int i = 0; i <=26 ; i++){
  Tlc.set(i, 500);
  if(i>=1)  Tlc.set(i-1, 5);
  if(i<1) Tlc.set(26, 5);
  Tlc.update();
  delay(1000);
}

digitalWrite(LayerOne, HIGH);
digitalWrite(LayerTwo, LOW);
digitalWrite(LayerThree, HIGH);
for(int i = 0; i <=26 ; i++){
  Tlc.set(i, 500);
  if(i>=1)  Tlc.set(i-1, 5);
  if(i<1) Tlc.set(26, 5);
  Tlc.update();
  delay(1000);
}

digitalWrite(LayerOne, HIGH);
digitalWrite(LayerTwo, HIGH);
digitalWrite(LayerThree, LOW);
for(int i = 0; i <=26 ; i++){
  Tlc.set(i, 500);
  if(i>=1)  Tlc.set(i-1, 5);
  if(i<1) Tlc.set(26, 5);
  Tlc.update();
  delay(1000);
}

  
}
