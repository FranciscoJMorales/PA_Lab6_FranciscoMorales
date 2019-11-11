#include "Eneagono.h"



Eneagono::Eneagono(double largo, double h)
{
	lados = 9;
	longitud = largo;
	apotema = h;
}


Eneagono::~Eneagono()
{
}

double Eneagono::ObtenerArea() const {
	return lados * longitud * apotema / 2;
}