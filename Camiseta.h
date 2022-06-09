#pragma once
#include "CamisaAbstracta.h"

class Camiseta : public CamisaAbstracta
{
private:

	bool cuelloV;

public:

	Camiseta(string, double, string, bool);
	~Camiseta();
	string toString();
};

