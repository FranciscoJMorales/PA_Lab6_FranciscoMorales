#pragma once
#include "Poligono.h"

class Hexagono : public Poligono
{
private:
	double apotema;

public:
	Hexagono(double largo, double h);
	~Hexagono();

public:
	double ObtenerArea() const override;
};

