#pragma once
#include "Poligono.h"

class Heptagono : public Poligono
{
private:
	double apotema;

public:
	Heptagono(double largo, double h);
	~Heptagono();

public:
	double ObtenerArea() const override;
};

