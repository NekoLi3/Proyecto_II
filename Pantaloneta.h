#pragma once
#include "PantalonAbstracto.h"
class Pantaloneta :
    public PantalonAbstracto
{
private:

	bool estampado;

public:

	Pantaloneta(string, double, string, bool);
	~Pantaloneta();
	string toString();
};

