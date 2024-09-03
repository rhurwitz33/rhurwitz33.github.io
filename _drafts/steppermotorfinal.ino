#include <AccelStepper.h>

float VPSBigSyringe = 0.00272; //VPS = volume per step = mL/step
float VPSSmallSyringe = 0.00106;
float VFlowRate = 0.544; // in mL per second

int dirPin = 2;
int stepPin = 3;
AccelStepper stepper(AccelStepper:: DRIVER, stepPin,dirPin);

int pushSyringe = 6;
int pullSyringe = 7;

int red_LED = 8;
int blue_LED = 9;
int green_LED = 10;

int limitSwitch = 11;

void setup() {
  // put your setup code here, to run once:
stepper.setMaxSpeed(1000);


 pinMode(pushSyringe, INPUT_PULLUP); 
 pinMode(pullSyringe,INPUT_PULLUP);

 pinMode(red_LED, OUTPUT);
 pinMode(blue_LED, OUTPUT);
 pinMode(green_LED, OUTPUT);

 pinMode(limitSwitch, INPUT_PULLUP);
 //attachInterrupt(digitalPinToInterrupt(limitSwitch), blink, FALLING);
}


void loop() {
  // put your main code here, to run repeatedly:
    int leftPinState = digitalRead(pushSyringe);
    int rightPinState = digitalRead(pullSyringe);
    int syringeStopper = digitalRead(limitSwitch);
    
if ( syringeStopper == HIGH){
  
    if (leftPinState == LOW) {
    stepper.setSpeed(VFlowRate/VPSBigSyringe);
    stepper.runSpeed();
    analogWrite(green_LED, 255);
    }

    if (rightPinState == LOW) {
      stepper.setSpeed(-VFlowRate/VPSBigSyringe);
      stepper.runSpeed();
      analogWrite(blue_LED, 255);
      
   
    }
      
    
  



}
if (syringeStopper == LOW){
 //stepper.stop();
  analogWrite(red_LED, 255);
  analogWrite(green_LED, 0);
  analogWrite(blue_LED, 0);

    if (rightPinState == LOW) {
      stepper.setSpeed(-VFlowRate/VPSBigSyringe);
      stepper.runSpeed();
      analogWrite(blue_LED, 255);
}

}
analogWrite(red_LED, 40);
    analogWrite(green_LED, 40);
    analogWrite(blue_LED, 0);
    }
