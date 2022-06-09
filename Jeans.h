#pragma once
#include "PantalonAbstracto.h"
class Jeans :
    public PantalonAbstracto
{
private:

	bool ajustado;

public:

	Jeans(string, double, string, bool);
	~Jeans();
	string toString();
};

