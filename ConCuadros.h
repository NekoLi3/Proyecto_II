#pragma once
#include "CamisaAbstracta.h"
class ConCuadros: public CamisaAbstracta
{
private:

	bool cuadroGrande;

public:

	ConCuadros(string, double, string,bool);
	~ConCuadros();
	string toString();
};

