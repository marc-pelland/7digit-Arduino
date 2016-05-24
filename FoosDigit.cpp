/*
  FoosDigit.cpp - Library for 7 segment displays
  Created by Marc Pelland, April 1, 2016.
*/

#include "Arduino.h"
#include "FoosDigit.h"

FoosDigit::FoosDigit(int pins[])
{
  _a = pins[0];
  _b = pins[1];
  _c = pins[2];
  _d = pins[3];
  _e = pins[4];
  _f = pins[5];
  _g = pins[6];

  for(int i = 0; i < 7; i++) {
    pinMode(pins[i], OUTPUT);
  }

}

void FoosDigit::displayDigit(int digit)
{
  //Conditions for displaying segment a
  if(digit!=1 && digit != 4) digitalWrite(_a, HIGH);

  //Conditions for displaying segment b
  if(digit != 5 && digit != 6) digitalWrite(_b, HIGH);

  //Conditions for displaying segment c
  if(digit !=2) digitalWrite(_c, HIGH);

  //Conditions for displaying segment d
  if(digit != 1 && digit !=4 && digit !=7) digitalWrite(_d, HIGH);

  //Conditions for displaying segment e
  if(digit == 2 || digit ==6 || digit == 8 || digit==0) digitalWrite(_e, HIGH);

  //Conditions for displaying segment f
  if(digit != 1 && digit !=2 && digit!=3 && digit !=7) digitalWrite(_f, HIGH);

  if (digit!=0 && digit!=1 && digit !=7) digitalWrite(_g, HIGH);
}

void FoosDigit::turnOff()
{
  digitalWrite(_a, LOW);
  digitalWrite(_b, LOW);
  digitalWrite(_c, LOW);
  digitalWrite(_d, LOW);
  digitalWrite(_e, LOW);
  digitalWrite(_f, LOW);
  digitalWrite(_g, LOW);
}
