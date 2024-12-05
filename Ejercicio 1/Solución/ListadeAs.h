
#pragma once // evita inclusiones m�ltiples del archivo
#include "A.h" // incluyo la declaraci�n de la clase "A.h"

class ListadeAs
{
	private:
		A** lista;  // puntero a un arreglo din�mico de punteros a objetos A
					// el primer * indica que lista es un puntero
					// el segundo * indica que cada elemento del arreglo din�mico es tambi�n un puntero a un objeto de tipo A

		int capacidad;  // tama�o actual del arreglo
		int numElementos;  // n�mero de elementos actuales en el arreglo

		void redimensionar();  // m�todo privado para duplicar el tama�o del arreglo

	public:

		ListadeAs(int capacidadInicial = 2);  // constructor con capacidad inicial por defecto
		~ListadeAs();  // destructor

		void agregar(A* a);  // agrega un objeto A al arreglo
		void eliminar(int id);  // elimina un objeto A por su id

		void eliminarUltimoElemento (); // elimina el �ltimo elemento del arreglo

		void mostrarA(int indice) const;  //  muestra la informaci�n de un objeto en un �ndice espec�fico, el const indica que no se modificar� el objeto que se llama
		void mostrarTodos() const;  // muestra la informaci�n de todos los objetos A del arreglo
};

