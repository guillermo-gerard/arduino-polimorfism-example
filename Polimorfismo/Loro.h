// Loro.h

#ifndef _LORO_h
#define _LORO_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Animal.h"
class Loro : public Animal {
public:
	Loro(int, char *nombre);
	bool duenio;
	void Habla();
};





#endif

