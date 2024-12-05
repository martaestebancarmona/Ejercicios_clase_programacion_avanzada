
#pragma once // evita inclusiones múltiples del archivo
#include "A.h" // incluyo la declaración de la clase "A.h"

class ListadeAs
{
	private:
		A** lista;  // puntero a un arreglo dinámico de punteros a objetos A
					// el primer * indica que lista es un puntero
					// el segundo * indica que cada elemento del arreglo dinámico es también un puntero a un objeto de tipo A

		int capacidad;  // tamaño actual del arreglo
		int numElementos;  // número de elementos actuales en el arreglo

		void redimensionar();  // método privado para duplicar el tamaño del arreglo

	public:

		ListadeAs(int capacidadInicial = 2);  // constructor con capacidad inicial por defecto
		~ListadeAs();  // destructor

		void agregar(A* a);  // agrega un objeto A al arreglo
		void eliminar(int id);  // elimina un objeto A por su id

		void eliminarUltimoElemento (); // elimina el último elemento del arreglo

		void mostrarA(int indice) const;  //  muestra la información de un objeto en un índice específico, el const indica que no se modificará el objeto que se llama
		void mostrarTodos() const;  // muestra la información de todos los objetos A del arreglo
};

