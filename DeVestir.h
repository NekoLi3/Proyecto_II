#pragma once
#include "PantalonAbstracto.h"
class DeVestir :
    public PantalonAbstracto
{
private:

	bool casimir;

public:

	DeVestir(string, double, string, bool);
	~DeVestir();
	string toString();
};

