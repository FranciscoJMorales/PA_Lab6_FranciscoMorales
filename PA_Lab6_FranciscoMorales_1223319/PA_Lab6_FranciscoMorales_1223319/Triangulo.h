#pragma once
#include "Poligono.h"

class Triangulo : public Poligono
{
public:
	Triangulo(double largo);
	~Triangulo();
	
public:
	double ObtenerArea() const override;
};

