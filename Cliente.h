#pragma once
#include "Observa.h"
class Cliente :
    public Observa
{
private:
    string cedula;
    string nombre;
    string correo;
    double pagoSubscripcion;
    string ciudad;
    string pais;

public:

    Cliente(string,string, string , double,string ,string);
    ~Cliente();
    void actualizar();
};

