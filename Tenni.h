#pragma once
#include "ZapatoAbstracto.h"
class Tenni :
    public ZapatoAbstracto
{
private:

	bool adidas;

public:

	Tenni(string, double, string, bool);
	~Tenni();
	string toString();
};

