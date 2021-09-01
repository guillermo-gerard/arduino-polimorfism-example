// 
// 
// 

#include "Perro.h"
#include "Animal.h"

Perro::Perro(int patas, char* nombre) : Animal(patas, nombre)
{
}
void Perro::Habla() {
	Serial.println("GUAU");
}


