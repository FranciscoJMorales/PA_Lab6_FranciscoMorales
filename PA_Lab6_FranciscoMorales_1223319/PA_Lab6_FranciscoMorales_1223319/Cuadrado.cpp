#include "Cuadrado.h"



Cuadrado::Cuadrado(double largo)
{
	lados = 4;
	longitud = largo;
}


Cuadrado::~Cuadrado()
{
}

double Cuadrado::ObtenerArea() const {
	return longitud * longitud;
}