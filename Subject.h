#pragma once
#include <list>
#include "Observa.h"
class Subject
{
protected:
	list <Observa*> subscriptor;

public:

	Subject();
	~Subject();
	void agregarSubscriptor(Observa*);
};

