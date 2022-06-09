#pragma once
#include "ZapatoAbstracto.h"
class Bota :
    public ZapatoAbstracto
{
private:

	bool alta;

public:

	Bota(string, double, string, bool);
	~Bota();
	string toString();
};

