#include "A4988CustomDrive.h"

Stepper :: Stepper(int dirrection_pin_, int step_pin_){
    dirrection_pin = dirrection_pin_;
    step_pin = step_pin_;
    stepper_pos = 0;

    //Setting Pin Modes
    pinMode(step_pin, OUTPUT); 
    pinMode(dirrection_pin, OUTPUT);

    up_direection_value = HIGH;
    down_dirrection_value = LOW;
}

void Stepper :: stepUP(){
    digitalWrite(dirrection_pin, up_direection_value);
    digitalWrite(step_pin, HIGH);
    delayMicroseconds(500);
    digitalWrite(step_pin, LOW);
    delayMicroseconds(500);
}  

void Stepper :: stepUP(int speed){
    digitalWrite(dirrection_pin, up_direection_value);
    digitalWrite(step_pin, HIGH);
    delayMicroseconds(speed);
    digitalWrite(step_pin, LOW);
    delayMicroseconds(speed);
}  

void Stepper :: stepDown(){
    digitalWrite(dirrection_pin, down_dirrection_value);
    digitalWrite(step_pin, HIGH);
    delayMicroseconds(500);
    digitalWrite(step_pin, LOW);
    delayMicroseconds(500);
}  

void Stepper :: stepDown(int speed){
    digitalWrite(dirrection_pin, down_dirrection_value);
    digitalWrite(step_pin, HIGH);
    delayMicroseconds(speed);
    digitalWrite(step_pin, LOW);
    delayMicroseconds(speed);
}  