#ifndef BUTTON_H
#define BUTTON_H
#include <Arduino.h>
#include <Joystick.h>

class Buttons {
  
  public:
    Buttons();
    void readInputs();
    void init(Joystick_* joystick);
    void sendButtonState();
    
    
  private:
    // 17 button inputs total
    bool DEBUG = true;
    int numberInputs = 24;
    bool lastButtonState[24] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    byte buttonMap[5] = {18,19,20,21,22};
    Joystick_* _joystick;
};

#endif
