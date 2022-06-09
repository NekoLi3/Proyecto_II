#include "Jeans.h"

Jeans::Jeans(string cod, double prec, string color, bool ajus) : PantalonAbstracto(cod, prec, color)
{
	ajustado = ajus;
}

Jeans::~Jeans()
{
}

string Jeans::toString()
{
	stringstream s;
	if (ajustado) {
		s << "Pantalon ajustado de color " << color << endl;
	}
	else
	{
		s << "Pantalon no ajustado de color " << color << endl;
	}
	return s.str();
}
