#include <tlc_shifts.h>
#include <tlc_servos.h>
#include <tlc_animations.h>
#include <tlc_fades.h>
#include <tlc_progmem_utils.h>
#include <tlc_config.h>
#include <Tlc5940.h>


//Pin Definitions
#define TLC_SIN    1
#define TLC_SCLK   2
#define TLC_GSCLK  2
#define TLC_XLAT   2
#define TLC_BLANK  2
#define TLC_VPRG   2

#define MSG_OUT    3
#define MSG_STRBE  2
#define MSG_RST    2

#define LYR1       2
#define LYR2       2
#define LYR3       2


//Vars
int audio[7]    //7 byte array for audio data


//Code
void setup(){


    digitalWrite(LYR2, HIGH);
    digitalWrite(LYR3, HIGH);
    digitalWrite(LYR1, HIGH);



    //Pin Setup
    pinMode(TLC_SIN, OUTPUT);
    pinMode(TLC_SCLK, OUTPUT);
    pinMode(TLC_GSCLK, OUTPUT);
    pinMode(TLC_XLAT, OUTPUT);
    pinMode(TLC_BLANK, OUTPUT);
    pinMode(TLC_VPRG, OUTPUT);

    pinMode(MSG_RST, OUTPUT);
    pinMode(MSG_STRBE, OUTPUT);
   

    //System Initialization
    digitalWrite(TLC_BLANK, HIGH);

}




void loop(){

    //Check audio
    checkMSG();

    //Set Layer 1
    setLayer(LYR1);

    //Output pattern for layer 1

    //Set Layer 2
    setLayer(LYR2);

    //Output pattern for layer 2

    //Set Layer 3
    setLayer(LYR3);

    //Output pattern for layer 3

}

//Functions

void setLayer(int lay){
    //Currently uses digitalWrite() which may be too slow

    if(lay == LYR1){

        digitalWrite(LYR2, HIGH);
        digitalWrite(LYR3, HIGH);
        digitalWrite(LYR1, LOW);

    }

    if(lay == LYR2){

        digitalWrite(LYR1, HIGH);
        digitalWrite(LYR3, HIGH);
        digitalWrite(LYR2, LOW);

    }

    if(lay == LYR3){

        digitalWrite(LYR2, HIGH);
        digitalWrite(LYR1, HIGH);
        digitalWrite(LYR3, LOW);

    }

}

void checkMSG(){
    //Scans each channel and writes out to an array

    //Reset to channel 1
    digitalWrite(MSG_RST, HIGH);
    digitalWrite(MSG_RST, LOW);

    for(int band=0; band <7; band++)
    {
        digitalWrite(MSG_STRBE, LOW);           // strobe pin on the shield - kicks the IC up to the next band
        delayMicroseconds(30);                  //This needs to be dealt with (interrupts?)
        left[band] = analogRead(MSG_OUT);       // store left band reading

        digitalWrite(MSG_STRBE, HIGH);
     }
}
