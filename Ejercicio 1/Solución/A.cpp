#include "A.h"

A::A(int id, std::string nombre)
{
	this->id = id;
	this->nombre = nombre;
	contador++;
}

A::~A()
{
	contador--;
}

int A::getId()
{
	return id;
}

void A::setId(int id)
{
	this->id = id;
}

std::string A::getNombre()
{
	return nombre;
}

void A::setNombre(std::string nombre)
{
	this->nombre = nombre;
}

int A::contador = 0;