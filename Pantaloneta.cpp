#include "Pantaloneta.h"

Pantaloneta::Pantaloneta(string cod, double prec, string color, bool est) : PantalonAbstracto(cod, prec, color)
{
	estampado = est;
}

Pantaloneta::~Pantaloneta()
{
}

string Pantaloneta::toString()
{
	stringstream s;
	if (estampado) {
		s << "Pantalon estampado de color " << color << endl;
	}
	else
	{
		s << "Pantalon no estampado de color " << color << endl;
	}
	return s.str();
}
