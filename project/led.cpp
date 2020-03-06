#include "mbed.h"

void Led(DigitalOut& ledpin, int i)
{
	for (int j  = 0; j < 2 * i; ++j) {
		ledpin = !ledpin;
		wait(0.2f);
	}
}