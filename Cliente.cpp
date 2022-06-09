#include "Cliente.h"

Cliente::Cliente(string ced, string nom, string correo, double pago, string ciudad, string pais)
{
	cedula = ced;
	nombre = nom;
	this->correo = correo;
	pagoSubscripcion = pago;
	this->ciudad = ciudad;
	this->pais = pais;
}

Cliente::~Cliente()
{
}

void Cliente::actualizar()
{
}
