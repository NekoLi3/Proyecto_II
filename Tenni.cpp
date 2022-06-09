#include "Tenni.h"

Tenni::Tenni(string cod, double prec, string color, bool adida) : ZapatoAbstracto(cod, prec, color)
{
	adidas = adida;
}

Tenni::~Tenni()
{
}

string Tenni::toString()
{
	stringstream s;
	if (adidas) {
		s << "Tennis de Adidas de color " << color << endl;
	}
	else
	{
		s << "Tennis no Adidas de color " << color << endl;
	}
	return s.str();
}
