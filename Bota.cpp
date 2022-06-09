#include "Bota.h"

Bota::Bota(string cod, double prec, string color, bool tam) : ZapatoAbstracto(cod, prec, color)
{
	alta = tam;
}

Bota::~Bota()
{
}

string Bota::toString()
{
	stringstream s;
	if (alta) {
		s << "Bota alta de color " << color << endl;
	}
	else
	{
		s << "Bota baja de color " << color << endl;
	}
	return s.str();
}
