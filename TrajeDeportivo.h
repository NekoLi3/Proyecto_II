#pragma once
#include "TrajeAbstracto.h"
#include "Camiseta.h"
#include "Tenni.h";
#include "Pantaloneta.h"
class TrajeDeportivo :
    public TrajeAbstracto
{
public:

	TrajeDeportivo(string,string);
	~TrajeDeportivo();

	void calcularPrecio(string, string, string);
	CamisaAbstracta* crearCamisa(string, string, bool);
	PantalonAbstracto* crearPantalon(string, string, bool);
	ZapatoAbstracto* crearZapatos(string, string, bool);
};

