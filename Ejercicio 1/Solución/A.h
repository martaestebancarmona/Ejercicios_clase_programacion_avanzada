
#pragma once // evita inclusiones múltiples del archivo
#include <string>
#include <iostream>

class A
{

	private:
		int id; // identificador
		std::string nombre; // nombre
		static int contador; // contador instancias creadas

	public:
		A(int id, std::string nombre); // constructor
		~A(); // destructor

		int getId(); // obtener id (devuelve un valor entero)
		void setId(int id); // modificar id (se le pasa un valor entero y no devuelve nada)

		std::string getNombre(); 
		void setNombre(std::string nombre); 
};
