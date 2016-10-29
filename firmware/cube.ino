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


//Code
void setup(){


    digitalWrite(LYR2, HIGH);
    digitalWrite(LYR3, HIGH);
    digitalWrite(LYR1, HIGH);



    //Pin Setup

    //System Initialization
    digitalWrite(TLC_BLANK, HIGH);



}


void loop(){

    //Check audio

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
