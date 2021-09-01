// Perro.h

#ifndef _PERRO_h
#define _PERRO_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "Animal.h"


class Perro : public Animal {
public:
	Perro(int, char *nombre);
	bool duenio;
	void Habla();
};

#endif

