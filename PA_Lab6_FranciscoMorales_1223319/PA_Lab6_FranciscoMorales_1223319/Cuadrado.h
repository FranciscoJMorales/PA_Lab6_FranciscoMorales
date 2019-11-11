#pragma once
#include "Poligono.h"

class Cuadrado : public Poligono
{
public:
	Cuadrado(double largo);
	~Cuadrado();

public:
	double ObtenerArea() const override;
};

