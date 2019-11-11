#include "Hexagono.h"



Hexagono::Hexagono(double largo, double h)
{
	lados = 6;
	longitud = largo;
	apotema = h;
}


Hexagono::~Hexagono()
{
}

double Hexagono::ObtenerArea() const {
	return lados * longitud * apotema / 2;
}