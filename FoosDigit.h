/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/

#ifndef FoosDigit_h
#define FoosDigit_h

#include "Arduino.h"

class FoosDigit
{
  public:
    FoosDigit(int pins[]);
    void displayDigit(int digit);
    void turnOff();
  private:
    int _pins[];
    int _a, _b, _c, _d, _e, _f, _g;
};

#endif
