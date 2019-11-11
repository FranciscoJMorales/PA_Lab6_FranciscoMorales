#include "Pentagono.h"



Pentagono::Pentagono(double largo, double h)
{
	lados = 5;
	longitud = largo;
	apotema = h;
}


Pentagono::~Pentagono()
{
}

double Pentagono::ObtenerArea() const {
	return lados * longitud * apotema / 2;
}