#pragma once
#include <sstream>
#include <iostream>
using namespace std;
class PantalonAbstracto
{
protected:
	string codigo;
	double precio;
	string color;

public:
	PantalonAbstracto(string, double, string);
	~PantalonAbstracto();

	virtual string toString() = 0;
};

