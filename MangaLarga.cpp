#include "MangaLarga.h"

MangaLarga::MangaLarga(string cod, double prec, string color, bool lisa) : CamisaAbstracta(cod, prec, color)
{
	this->lisa=lisa;
}

MangaLarga::~MangaLarga()
{
}

string MangaLarga::toString()
{
	stringstream s;
	if (lisa) {
		s << "Camisa de manga larga lisa de color " << color << endl;
	}
	else
	{
		s << "Camisa de manga larga no lisa de color " << color << endl;
	}
	return s.str();
}
