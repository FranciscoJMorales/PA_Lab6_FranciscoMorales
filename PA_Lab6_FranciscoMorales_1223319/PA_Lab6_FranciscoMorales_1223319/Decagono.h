#pragma once
#include "Poligono.h"

class Decagono : public Poligono
{
private:
	double apotema;

public:
	Decagono(double largo, double h);
	~Decagono();

public:
	double ObtenerArea() const override;
};

