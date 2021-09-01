// Animal.h

#ifndef _ANIMAL_h
#define _ANIMAL_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Animal {
public:
	Animal(int patas, char* nombre);
	virtual void Habla() = 0;		//funcion virtual pura
	virtual char* GetNombre() { return _nombre; }; //funcion definida inline
private:
	int _patas;
protected:
	char* _nombre;
};

#endif


