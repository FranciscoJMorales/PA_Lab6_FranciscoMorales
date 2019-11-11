#pragma once
#include "Poligono.h"

class Octagono : public Poligono
{
private:
	double apotema;

public:
	Octagono(double largo, double h);
	~Octagono();

public:
	double ObtenerArea() const override;
};

