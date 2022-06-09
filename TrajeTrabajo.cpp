#include "TrajeTrabajo.h"

TrajeTrabajo::TrajeTrabajo(string cod, string tipo) :TrajeAbstracto(cod, tipo)
{
}

TrajeTrabajo::~TrajeTrabajo()
{
}

void TrajeTrabajo::calcularPrecio(string cod, string cod2, string cod3){
	double aux = Precio::precioConCuadros(cod) + Precio::precioJeans(cod2) + Precio::precioBotas(cod3);
	aux = aux + (aux * porcentajeGanancia);

	setPrecio(aux);
}

CamisaAbstracta* TrajeTrabajo::crearCamisa(string cod, string color, bool cuadroG)
{
	double precioC = Precio::precioConCuadros(cod);
	return new ConCuadros(cod, precioC, color, cuadroG);
}

PantalonAbstracto* TrajeTrabajo::crearPantalon(string cod, string color, bool ajuste)
{
	double precioP = Precio::precioJeans(cod);
	return new Jeans(cod, precioP, color, ajuste);
}

ZapatoAbstracto* TrajeTrabajo::crearZapatos(string cod, string color, bool alta)
{
	double precioZ = Precio::precioBotas(cod);
	return new Bota(cod, precioZ, color, alta);
}
