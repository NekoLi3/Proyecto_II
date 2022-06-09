#include "TrajeEjecutivo.h"
#include "TrajeAbstracto.h"
using namespace std;
int main() {
	
	CamisaAbstracta* c;
	PantalonAbstracto* p;
	ZapatoAbstracto* z;

	TrajeAbstracto* t = new TrajeEjecutivo("111","mediano");
	c= t->crearCamisa("ML002","blanco",false);
	p= t->crearPantalon("DV006","negro",true);
	z= t->crearZapatos("EJ006","negro",true);

	t->calcularPrecio("ML002", "DV006", "EJ006");

	cout<< c->toString()<< p->toString()<< z->toString()<<endl<<t->getPrecio()<<endl<<endl;

	return 0;
}