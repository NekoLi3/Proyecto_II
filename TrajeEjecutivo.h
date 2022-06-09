#pragma once
#include "TrajeAbstracto.h"
#include "MangaLarga.h"
#include "DeVestir.h"
#include "Ejecutivo.h"
class TrajeEjecutivo :
    public TrajeAbstracto
{
public:
	
	TrajeEjecutivo(string,string);
	~TrajeEjecutivo();
	
	void calcularPrecio(string,string,string);
	CamisaAbstracta* crearCamisa(string, string, bool);
	PantalonAbstracto* crearPantalon(string, string, bool);
	ZapatoAbstracto* crearZapatos(string, string, bool);

};

