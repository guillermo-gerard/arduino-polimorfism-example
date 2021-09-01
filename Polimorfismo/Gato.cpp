// 
// 
// 

#include "Gato.h"
#include "Animal.h"

Gato::Gato(int patas, char* nombre) : Animal(patas, nombre)
{
}

void Gato::Habla() {
	Serial.println("MIAU");
}

