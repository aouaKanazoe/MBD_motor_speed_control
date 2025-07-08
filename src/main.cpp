// integration of the generated code

extern "C"{
  #include "PCCI_2.h"
  #include "PCCI_2_private.h"
}

#include <Arduino.h>

void setup() {
 pinMode(10,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(7,INPUT);
}

void loop() {
  // put your code here

PCCI_2_U.PercentRawValue_U16 = analogRead(A0);
PCCI_2_U.motorRotatorDir_B = digitalRead(7);
  // add the percentage calculation function 
   PCCI_2_CalculatePercentFunction(PCCI_2_U.PercentRawValue_U16,
    PCCI_2_U.motorRotatorDir_B, &PCCI_2_Y.IndicatorLamp_B,
    &PCCI_2_Y.motorTerminalA_B, &PCCI_2_Y.motorTerminalB_B,
    &PCCI_2_DW.CalculatePercentFunction,
    &PCCI_2_PrevZCX.CalculatePercentFunction);
digitalWrite(8,PCCI_2_Y.motorTerminalA_B);
digitalWrite(9,PCCI_2_Y.motorTerminalB_B);

digitalWrite(10, PCCI_2_Y.IndicatorLamp_B);
  
}