#pragma once
#include "Precio.h"
#include "CamisaAbstracta.h"
#include "PantalonAbstracto.h"
#include "ZapatoAbstracto.h"

const double porcentajeGanancia = 0.80;

class TrajeAbstracto
{
protected:
	string codigo;
	double precio;
	string medida;

public:

	TrajeAbstracto(string,string);
	~TrajeAbstracto();

	void setPrecio(double);
	double getPrecio();

	virtual void calcularPrecio(string, string, string)=0;
	virtual CamisaAbstracta* crearCamisa(string,string,bool)=0;
	virtual PantalonAbstracto* crearPantalon(string, string, bool) = 0;
	virtual ZapatoAbstracto* crearZapatos(string, string, bool) = 0;
};


