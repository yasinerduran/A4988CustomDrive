#define A4988CustomDrive_H
#include <Arduino.h>
class Stepper{
    private:
        int dirrection_pin;
        int step_pin;
        int MS1_pin;
        int MS2_pin;
        int MS3_pin;
        int stepper_pos;

        bool up_direection_value;
        bool down_dirrection_value;

        

    public:
        Stepper(int dirrection_pin_, int step_pin_);
        ~Stepper();
        void stepUP();
        void stepUP(int speed);
        void stepDown();
        void stepDown(int speed);
}