#include "Decagono.h"



Decagono::Decagono(double largo, double h)
{
	lados = 10;
	longitud = largo;
	apotema = h;
}


Decagono::~Decagono()
{
}

double Decagono::ObtenerArea() const {
	return lados * longitud * apotema / 2;
}