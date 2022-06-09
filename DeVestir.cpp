#include "DeVestir.h"

DeVestir::DeVestir(string cod, double prec, string color, bool casi) : PantalonAbstracto(cod, prec, color)
{
	casimir = casi;
}

DeVestir::~DeVestir()
{
}

string DeVestir::toString()
{
	stringstream s;
	if (casimir) {
		s << "Pantalon casimir de color " << color << endl;
	}
	else
	{
		s << "Pantalon no casimir de color " << color << endl;
	}
	return s.str();
}
