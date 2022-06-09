#include "Subject.h"

Subject::Subject()
{
}

Subject::~Subject()
{
}

void Subject::agregarSubscriptor(Observa* ob)
{
	subscriptor.push_back(ob);
}
