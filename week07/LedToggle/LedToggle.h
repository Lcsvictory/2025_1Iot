#ifndef LedToggle_h
#define LedToggle_h


#include "Arduino.h"

class LedToggle {
public:
	LedToggle(int pin, int delay);
	void toggle();

private:
	int _pin;
	bool _state;
	int _delay;
};

#endif
