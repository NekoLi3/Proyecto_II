#pragma once
#include <sstream>
#include <iostream>
using namespace std;
class CamisaAbstracta
{
protected:
	string codigo;
	double precio;
	string color;

public:
	CamisaAbstracta(string,double,string);
	~CamisaAbstracta();

	virtual string toString() = 0;
};
