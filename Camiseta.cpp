#include "Camiseta.h"

Camiseta::Camiseta(string cod, double prec, string color, bool cuello) : CamisaAbstracta(cod, prec, color)
{
	cuelloV = cuello;
}

Camiseta::~Camiseta()
{
}

string Camiseta::toString()
{
	stringstream s;
	if (cuelloV) {
		s << "Camiseta de cuello en V de color " << color << endl;
	}
	else
	{
		s << "Camiseta de cuello en U de color " << color << endl;
	}
	return s.str();
}
