#include "Octagono.h"



Octagono::Octagono(double largo, double h)
{
	lados = 8;
	longitud = largo;
	apotema = h;
}


Octagono::~Octagono()
{
}

double Octagono::ObtenerArea() const {
	return lados * longitud * apotema / 2;
}