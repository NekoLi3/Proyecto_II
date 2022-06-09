#pragma once
#include "TrajeAbstracto.h"
#include "ConCuadros.h"
#include "Jeans.h"
#include "Bota.h"
class TrajeTrabajo :
    public TrajeAbstracto
{
public:

	TrajeTrabajo(string, string);
	~TrajeTrabajo();

	void calcularPrecio(string, string, string);
	CamisaAbstracta* crearCamisa(string, string, bool);
	PantalonAbstracto* crearPantalon(string, string, bool);
	ZapatoAbstracto* crearZapatos(string, string, bool);
};

