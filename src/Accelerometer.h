#ifndef ACCEL_H
#define ACCEL_H
#include <Arduino.h>
#include "JoystickWrapper.h"
#include "Config.h"


class Accelerometer {

  public:
    Accelerometer();
    void init(Joystick_* joystick, Config* config);
    void accelerometerRead();
    void sendAccelerometerState();
    void resetAccelerometer();

  private:
    bool DEBUG = false;
    Config* _config;
    float xValueOffset = 0;
    float yValueOffset = 0;
    Joystick_* _joystick;
    int xValue;
    int yValue;
    int priorXValue;
    int priorYValue;
    byte buttonState;
};

#endif
