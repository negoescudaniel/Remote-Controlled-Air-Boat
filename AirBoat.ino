#include<Servo.h>
// Define Input Connections
#define CH1 3
#define CH3 5
#define CH6 6
#define servoPin 9 
#define ESCPin 10
//Servo + ESC
Servo Servo1;
Servo ESC;
// Integers to represent values from sticks and pots
int ch1Value;
int ch3Value;
 
// Boolean to represent switch value
bool ch6Value;
 
// Read the number of a specified channel and convert to the range provided.
// If the channel is off, return the default value
int readChannel(int channelInput, int minLimit, int maxLimit, int defaultValue){
  int ch = pulseIn(channelInput, HIGH, 30000);
  if (ch < 100) return defaultValue;
  return map(ch, 1000, 2000, minLimit, maxLimit);
}
 
// Read the switch channel and return a boolean value
bool readSwitch(byte channelInput, bool defaultValue){
  int intDefaultValue = (defaultValue)? 100: 0;
  int ch = readChannel(channelInput, 0, 100, intDefaultValue);
  return (ch > 50);
}
 
void setup(){
  Servo1.attach(servoPin);
  ESC.attach(ESCPin,1000,2000);
  // Set all pins as inputs
  pinMode(CH1, INPUT);
  pinMode(CH3, INPUT);
  pinMode(CH6, INPUT);
}
 
 
void loop() {
  // Get values for each channel
  ch1Value = readChannel(CH1, -100, 100, 0);
  ch3Value = readChannel(CH3, -100, 100, -100);
  ch6Value = readSwitch(CH6, false);
  if(ch6Value){
    int speed=map(ch3Value,-100, 100, 0, 180);
    ESC.write(speed);
    int angle = map(ch1Value, -100, 100, 135, 45);
    Servo1.write(angle);
  }else{
    Servo1.write(90);
    ESC.write(0);
  }
  
}
