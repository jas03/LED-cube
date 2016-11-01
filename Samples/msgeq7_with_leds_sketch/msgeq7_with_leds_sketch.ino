#include "Tlc5940.h"

#define LayerOne 6   // PD6 (pin 11 of chip)
#define LayerTwo 7     //  PD7 (pin 12 of chip)
#define LayerThree 8    //   PB0 (pin 13 of chip)

#define analogPin 0    // read from multiplexer using analog input 0
#define strobePin 2   // strobe is attached to digital pin 2
#define resetPin 4  // reset is attached to digital pin 3
int spectrumValue[7]; // to hold a2d values

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

 digitalWrite(LayerOne, LOW);
 digitalWrite(LayerTwo, LOW);
 digitalWrite(LayerThree, LOW); 
}

void loop()
{
 digitalWrite(resetPin, HIGH);
 digitalWrite(resetPin, LOW);

 for (int i = 0; i < 7; i++)
 {

 digitalWrite(strobePin, LOW);
 delayMicroseconds(30); // to allow the output to settle
 spectrumValue[i] = analogRead(analogPin);

 

 if (i<=1) Tlc.set(i+9,4*spectrumValue[i]);
 if (i<=5) Tlc.set(i+20,4*spectrumValue[i]);
 if (i<=7) Tlc.set(i+2,4*spectrumValue[i]);
 Tlc.update();

 digitalWrite(strobePin, HIGH);
 }
}
