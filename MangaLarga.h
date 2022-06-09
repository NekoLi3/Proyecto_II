#pragma once
#include "CamisaAbstracta.h"
class MangaLarga :
    public CamisaAbstracta
{
private:

	bool lisa;

public:

	MangaLarga(string, double, string, bool);
	~MangaLarga();
	string toString();
};

