#include "Precio.h"

double Precio::precioCamiseta(string cod)
{
	//Sin cuello en V
	if (cod == "CA001") { return 150.00; }  //grande
	if (cod == "CA002") { return 100.00; }  //mediana
	if (cod == "CA003") { return 75.00; }  //pequenia
	if (cod == "CA004") { return 50.00; }   //ninio

	//Con cuello en V
	if (cod == "CA005") { return 200.00; } //grande
	if (cod == "CA006") {return 150.00;} //mediana
	if (cod == "CA007") { return 125.00; } //pequenia
	if (cod == "CA008") { return 75.00; }//ninio
}

double Precio::precioMangaLarga(string cod)
{
	//no lisa
	if (cod == "ML001") { return 325.00; } //grande
	if (cod == "ML002") { return 280.00; } //mediana
	if (cod == "ML003") { return 150.00; } //pequenia
	if (cod == "ML004") { return 125.00; } //ninio

	//lisa
	if (cod == "ML005") { return 375.00; } //grande
	if (cod == "ML006") { return 315.00; } //mediana
	if (cod == "ML007") { return 175.00; } //pequenia
	if (cod == "ML008") { return 165.00; } //ninio
}

double Precio::precioConCuadros(string cod)
{
	//cuadro pequenio
	if (cod == "CC001") { return 250.00; } //grande
	if (cod == "CC002") { return 200.00; } //mediana
	if (cod == "CC003") { return 150.00; } //pequenia
	if (cod == "CC004") { return 100.00; } //ninio

	//cuadro grande
	if (cod == "CC005") { return 300.00; }//grande
	if (cod == "CC006") { return 250.00; }//mediana
	if (cod == "CC007") { return 175.00; } //pequenia
	if (cod == "CC008") { return 150.00; }//ninio
}

double Precio::precioJeans(string cod)
{
	//no ajustado
	if (cod == "JE001") { return 150.00; } //grande
	if (cod == "JE002") { return 100.00; } //mediana
	if (cod == "JE003") { return 50.00; } //pequenia
	if (cod == "JE004") { return 20.00; } //ninio

	//Ajustado
	if (cod == "JE005") { return 200.00; } //grande
	if (cod == "JE006") { return 150.00; } //mediana
	if (cod == "JE007") { return 75.00; } //pequenia
	if (cod == "JE008") { return 90.00; }//ninio
}

double Precio::precioPantaloneta(string cod)
{
	//no estampada
	if (cod == "PL001") { return 110.00; } //grande
	if (cod == "PL002") { return 85.00; } //mediana
	if (cod == "PL003") { return 50.00; } //pequenia
	if (cod == "PL004") { return 45.00; } //ninio

	//Estampada
	if (cod == "PL005") { return 150.00; } //grande
	if (cod == "PL006") { return 130.00; } //mediana
	if (cod == "PL007") { return 80.00; }//pequenia
	if (cod == "PL008") { return 75.00; } //ninio
}

double Precio::precioDeVestir(string cod)
{
	//no casimir
	if (cod == "DV001") { return 300.00; } //grande
	if (cod == "DV002") { return 250.00; } //mediana
	if (cod == "DV003") { return 125.00; } //pequenia
	if (cod == "DV004") { return 100.00; } //ninio

	//Casimir
	if (cod == "DV005") { return 500.00; } //grande
	if (cod == "DV006") { return 450.00; } //mediana
	if (cod == "DV007") { return 260.00; } //pequenia
	if (cod == "DV008") { return 200.00; } //ninio
}

double Precio::precioBotas(string cod)
{
	//Bajas
	if (cod == "BT001") { return 220.00; } //grande
	if (cod == "BT002") { return 200.00; } //mediana
	if (cod == "BT003") { return 150.00; } //pequenia
	if (cod == "BT004") { return 75.00; } //ninio

	//Altas
	if (cod == "BT005") { return 250.00; } //grande
	if (cod == "BT006") { return 225.00; } //mediana
	if (cod == "BT007") { return 175.00; } //pequenia
	if (cod == "BT008") { return 90.00; }//ninio
}

double Precio::precioTennis(string cod)
{
	//No Adidas
	if (cod == "TN001") { return 225.00; } //grande
	if (cod == "TN002") { return 200.00; }//mediana
	if (cod == "TN003") { return 150.00; } //pequenia
	if (cod == "BT004") { return 75.00; } //ninio

	//Adidas
	if (cod == "TN005") { return 335.00; }//grande
	if (cod == "TN006") { return 300.00; } //mediana
	if (cod == "TN007") { return 200.00; } //pequenia
	if (cod == "TN008") { return 150.00; } //ninio
}

double Precio::precioEjecutivo(string cod)
{
	//No fino
	if (cod == "EJ001") { return 400.00; }//grande
	if (cod == "EJ002") { return 350.00; } //mediana
	if (cod == "EJ003") { return 250.00; } //pequenia
	if (cod == "EJ004") { return 175.00; } //ninio

	//Fino
	if (cod == "EJ005") { return 450.00; } //grande
	if (cod == "EJ006") { return 400.00; } //mediana
	if (cod == "EJ007") { return 325.00; } //pequenia
	if (cod == "EJ008") { return 200.00; } //ninio
}
