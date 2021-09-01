// Gato.h

#ifndef _GATO_h
#define _GATO_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif
#include "Animal.h"
class Gato : public Animal {
public:
	Gato(int, char*);// : Animal(int, char*);
	bool duenio;
	void Habla();
};

#endif

