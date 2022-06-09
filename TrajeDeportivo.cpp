#include "TrajeDeportivo.h"

TrajeDeportivo::TrajeDeportivo(string cod, string tipo) :TrajeAbstracto(cod, tipo)
{
}

TrajeDeportivo::~TrajeDeportivo()
{
}

void TrajeDeportivo::calcularPrecio(string cod, string cod2, string cod3)
{
	double aux = Precio::precioCamiseta(cod) + Precio::precioPantaloneta(cod2) + Precio::precioTennis(cod3);
	aux = aux + (aux * porcentajeGanancia);

	setPrecio(aux);
}

CamisaAbstracta* TrajeDeportivo::crearCamisa(string cod, string color, bool cuello)
{
	double precioC = Precio::precioCamiseta(cod); 
	return new Camiseta(cod, precioC, color, cuello);
}

PantalonAbstracto* TrajeDeportivo::crearPantalon(string cod, string color, bool estam)
{
	double precioP = Precio::precioPantaloneta(cod);
	return new Pantaloneta(cod, precioP, color, estam);
}

ZapatoAbstracto* TrajeDeportivo::crearZapatos(string cod, string color, bool adidas)
{
	double precioZ = Precio::precioTennis(cod);
	return new Tenni(cod, precioZ, color, adidas);
}
