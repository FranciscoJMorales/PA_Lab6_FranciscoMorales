#include "Triangulo.h"



Triangulo::Triangulo(double largo)
{
	lados = 3;
	longitud = largo;
}


Triangulo::~Triangulo()
{
}

double Triangulo::ObtenerArea() const {
	return longitud * longitud * System::Math::Sin(3.14159265359 / 3);
}