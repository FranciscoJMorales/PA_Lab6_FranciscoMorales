#pragma once
class Poligono
{
public:
	Poligono();
	~Poligono();

public:
	virtual double ObtenerArea() const = 0;
	double ObtenerPerimetro();

protected:
	double lados;
	double longitud;
};

