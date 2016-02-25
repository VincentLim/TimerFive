/**
 * 2016 Vincent Limorté
 * Test and sample using Timer5 lib.
 *
 */

#include <TimerFive/TimerFive.h>


void setup()
{
	// 440 Hz
	// PWM pins attached to Timer5 are 44,45 and 46
	Timer5.initialize(1000000/440);
	Timer5.pwm(44, 512);
}



void loop()
{


}
