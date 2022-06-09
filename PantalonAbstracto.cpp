#include "PantalonAbstracto.h"

PantalonAbstracto::PantalonAbstracto(string cod, double prec, string color)
{
	codigo = cod;
	precio = prec;
	this->color = color;
}

PantalonAbstracto::~PantalonAbstracto()
{
}
