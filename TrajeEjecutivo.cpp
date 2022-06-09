#include "TrajeEjecutivo.h"

TrajeEjecutivo::TrajeEjecutivo(string cod, string tipo):TrajeAbstracto(cod, tipo)
{

}

TrajeEjecutivo::~TrajeEjecutivo()
{
}

void TrajeEjecutivo::calcularPrecio(string cod,string cod2, string cod3)
{
	double aux = Precio::precioMangaLarga(cod) + Precio::precioDeVestir(cod2) + Precio::precioEjecutivo(cod3);
	aux = aux + (aux* porcentajeGanancia);

	setPrecio(aux);
}

CamisaAbstracta* TrajeEjecutivo::crearCamisa(string cod, string color, bool lisa)
{
	double precioC = Precio::precioMangaLarga(cod);
	return new MangaLarga(cod, precioC, color, lisa);
}

PantalonAbstracto* TrajeEjecutivo::crearPantalon(string cod, string color, bool casi )
{
	double precioP = Precio::precioDeVestir(cod);
	return new DeVestir(cod, precioP, color, casi);
}

ZapatoAbstracto* TrajeEjecutivo::crearZapatos(string cod, string color, bool fino)
{
	double precioZ = Precio::precioEjecutivo(cod);
	return new Ejecutivo(cod,precioZ,color,fino);
}
