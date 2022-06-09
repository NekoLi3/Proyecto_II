#include "Ejecutivo.h"

Ejecutivo::Ejecutivo(string cod, double prec, string color, bool fino) : ZapatoAbstracto(cod, prec, color)
{
	this->fino = fino;
}

Ejecutivo::~Ejecutivo()
{
}

string Ejecutivo::toString()
{
	stringstream s;
	if (fino) {
		s << "Ejecutivo fino de color " << color << endl;
	}
	else
	{
		s << "Ejecutivo no fino de color " << color << endl;
	}
	return s.str();
}
