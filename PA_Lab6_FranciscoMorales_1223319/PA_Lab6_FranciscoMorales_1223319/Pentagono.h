#pragma once
#include "Poligono.h"

class Pentagono : public Poligono
{
private:
	double apotema;

public:
	Pentagono(double largo, double h);
	~Pentagono();

public:
	double ObtenerArea() const override;
};

