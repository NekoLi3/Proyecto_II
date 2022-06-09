#include "ConCuadros.h"

ConCuadros::ConCuadros(string cod, double prec, string color, bool tam): CamisaAbstracta(cod,prec,color)
{
	cuadroGrande = tam;
}

ConCuadros::~ConCuadros()
{
}

string ConCuadros::toString()
{
	stringstream s;
	if (cuadroGrande) {
		s << "Camisa de cuadros grandes de color " << color << endl;
	}
	else
	{
		s << "Camisa de cuadros pequenios de color " << color << endl;
	}
	return s.str();
}
