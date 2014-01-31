#include <LCDshield.h>
#include <LEDmatrix.h>
#include <keypadbuttons.h>
#include <comms.h>
#include <tonematrix.h>


int h;
int wang=0;
void setup() {
  keypadSetup(); 
  lcdSetup();
  matrixSetup();    
  Serial.begin(9600);
  blinkAll_2Bytes(2,500);  
}

void loop() {
    
    
  LEDcontrol();
  lcd_loop();
  led_Loop();
  
 

  if(h>10)
  {
  matrixModes();
  h=0;  
  }
   h++;
   
  if (Serial.available() > 0) 
  wang = Serial.read()/2;  

 
    
}







