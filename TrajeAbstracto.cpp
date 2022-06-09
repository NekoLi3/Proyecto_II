#include "TrajeAbstracto.h"

TrajeAbstracto::TrajeAbstracto(string cod, string medida)
{
	codigo = cod;
	precio = 0;
	this->medida = medida;
	

}

TrajeAbstracto::~TrajeAbstracto()
{
}

void TrajeAbstracto::setPrecio(double prec)
{
	precio = prec;
}

double TrajeAbstracto::getPrecio()
{
	return precio;
}

