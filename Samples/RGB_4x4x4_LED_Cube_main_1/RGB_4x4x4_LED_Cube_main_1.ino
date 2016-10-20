

#include "Tlc5940.h"

#define LayerOne 6
#define LayerTwo 7
#define LayerThree 8
#define LayerFour 15

float CubeBrig = 0.10;
float CubeSat = 1.00;
int CubeRes = 2047;

int RedCal = 2048;
int GreenCal = -512;
int BlueCal = 768;

int LayerDuration = 4167;
int layer = 0;
unsigned long oldMicros = 0;

float hueAAone = 0.00;
float hueADone = 0.00;
float hueDAone = 0.00;
float hueDDone = 0.00;

float hueAAfour = 0.00;
float hueADfour = 0.00;
float hueDAfour = 0.00;
float hueDDfour = 0.00;

void setup()
{
  /* Call Tlc.init() to setup the tlc.
     You can optionally pass an initial PWM value (0 - 4095) for all channels.*/
  pinMode(LayerOne, OUTPUT);
  pinMode(LayerTwo, OUTPUT);
  pinMode(LayerThree, OUTPUT);
  pinMode(LayerFour, OUTPUT);
  
  Tlc.init();
  

}



void loop(){
  
  if(micros()>= oldMicros){
    oldMicros=micros()+LayerDuration;
  
   CubeUpdate(layer);
   layer++;
   if(layer ==5){
     layer = 1;

   }
   
   if(layer==3){
//   renderHue();
   renderCube();
    }
     
   if(layer==2){
   hueAAone = hueAAone+0.00125;
   hueADone = hueADone+0.0025;
   hueDAone = hueDAone+0.0012;
   hueDDone = hueDDone+0.0017;
     }
     
     if(layer==4){
   hueAAfour = hueAAfour+0.002;
   hueADfour = hueADfour+0.0075;
   hueDAfour = hueDAfour+0.0022;
   hueDDfour = hueDDfour+0.005;
     }
  }
   if(hueAAone>=1.00) hueAAone=0.00;
   if(hueADone>=1.00) hueADone=0.00;
   if(hueDAone>=1.00) hueDAone=0.00;
   if(hueDDone>=1.00) hueDDone=0.00;
   
   if(hueAAfour>=1.00) hueAAfour=0.00;
   if(hueADfour>=1.00) hueADfour=0.00;
   if(hueDAfour>=1.00) hueDAfour=0.00;
   if(hueDDfour>=1.00) hueDDfour=0.00;
}
