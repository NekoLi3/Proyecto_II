#pragma once
#include <sstream>
#include <iostream>
using namespace std;
class ZapatoAbstracto
{
protected:
	string codigo;
	double precio;
	string color;

public:
	ZapatoAbstracto(string,double,string);
	~ZapatoAbstracto();

	virtual string toString()=0;
};

