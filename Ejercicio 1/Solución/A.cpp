
#include "A.h" // incluyo la declaración de la clase "A.h"

int A::contador = 0; // inicializo la variable contador fuera de la clase

// Constructor
A::A(int id, std::string nombre)
{
	this->id = id; // inicializa el atributo id con el valor pasado
	this->nombre = nombre; // inicializa el atributo nombre con el valor pasado
	contador++; // incrementa el contador al crear una instancia
}

// Destructor
A::~A()
{
	contador--; // decrementa el contador al destruir una instancia
}

// Obtener el id
int A::getId()
{
	return id; // devuelve el valor de id
}

// Modificar el id
void A::setId(int id)
{
	this->id = id; // asigna el nuevo valor pasado al atributo id
}

// Obtener el nombre
std::string A::getNombre()
{
	return nombre; // devuelve el valor de nombre
}

// Modificar el nombre
void A::setNombre(std::string nombre)
{
	this->nombre = nombre; // asigna el nuevo valor pasado al atributo nombre
}

