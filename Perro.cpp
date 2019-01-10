#include "Perro.h"
#include <iostream>

Perro::Perro(std::string nombre)
{
    _nombre = nombre;
}

Perro::~Perro()
{
    std::cout << "Destruyendo al perro " << _nombre << std::endl;
}

void Perro::Ladrar()
{
    std::cout << "jau jau" << std::endl;
}
