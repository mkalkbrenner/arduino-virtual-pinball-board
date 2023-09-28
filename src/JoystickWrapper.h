#ifndef JOYSTICKWRAPPER_H
#define JOYSTICKWRAPPER_H

#ifdef USE_TINYUSB
#include <Joystick16Bit.h>
class Joystick_ : public Joystick16Bit
{
  using Joystick16Bit::Joystick16Bit;
};
#else
#include <Joystick.h>
#endif

#endif
