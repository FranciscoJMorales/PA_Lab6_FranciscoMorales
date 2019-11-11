#pragma once
#include "Poligono.h"

class Eneagono : public Poligono
{
private:
	double apotema;

public:
	Eneagono(double largo, double h);
	~Eneagono();

public:
	double ObtenerArea() const override;
};

