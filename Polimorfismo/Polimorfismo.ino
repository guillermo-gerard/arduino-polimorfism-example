/*
 Name:		Polimorfismo.ino
 Created:	20/4/2018 5:23:09 PM
 Author:	Guillermo
*/

// the setup function runs once when you press reset or power the board

#include "Loro.h"
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"

void setup() {
	Serial.begin(9600);
}

Perro pichicho(4, "boby");
Perro toby(3, "toby");
Gato minino(4, "garrita");
Loro pepe(2, "pepe");

//Animal animales[] = { pichicho, toby, minino }; //esto falla si Animal tiene una funcion virtual pura
												// no se puede crear un array de clase abstracta
Animal *animales[] = { &pichicho, &toby, &minino, &pepe };

int myInt = 6;

// the loop function runs over and over again until power down or reset
void loop() {

	pichicho.GetNombre();

	for (int i = 0; i < (sizeof(animales) / sizeof(*animales)); i++) {
		Serial.print(animales[i]->GetNombre());
		Serial.print(" dice: ");
		animales[i]->Habla();
	}
	while (1) { ; }

	int* puntero = &myInt;
}











