#pragma once
#include "ZapatoAbstracto.h"
class Ejecutivo :
    public ZapatoAbstracto
{
private:

	bool fino;

public:

	Ejecutivo(string, double, string, bool);
	~Ejecutivo();
	string toString();
};

