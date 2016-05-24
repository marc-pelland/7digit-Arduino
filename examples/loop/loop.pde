#include <FoosDigit.h>

int digit1Pins[] = {22, 23, 24, 25, 26, 27, 28};

FoosDigit digit1(digit1Pins);

void setup()
{
}

void loop()
{
  for(int i=0;i<10;i++)
  {
   digit1.displayDigit(i);
   delay(1000);
   digit1.turnOff();
  }
}
