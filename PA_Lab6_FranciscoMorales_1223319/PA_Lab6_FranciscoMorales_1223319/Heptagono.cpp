#include "Heptagono.h"



Heptagono::Heptagono(double largo, double h)
{
	lados = 7;
	longitud = largo;
	apotema = h;
}


Heptagono::~Heptagono()
{
}

double Heptagono::ObtenerArea() const {
	return lados * longitud * apotema / 2;
}