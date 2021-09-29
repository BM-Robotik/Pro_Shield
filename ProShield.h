#include "Arduino.h"
#ifndef ProShield_h
#define ProShield_h
class ProShield
{
public:
	ProShield;
void GreenLED(bool g_data);
void RedLED(bool r_data);
void BlueLED(bool b_data);
void YellowLED(bool y_data);
void wait(int dly);
void ToneBuzzer(int frequency);
void ToneBuzzer(int frequency, int duration);
void NoToneBuzzer();
int ReadButton();
int ReadButtonDigital();
int ReadLDR();

};

#endif
