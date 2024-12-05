
#include "ListadeAs.h" // incluyo la declaraci�n de la clase "A.h"

// M�todo para duplicar el tama�o del array
void ListadeAs::redimensionar()
{
    capacidad *= 2;  // duplica la capacidad actual
    A** nuevaLista = new A * [capacidad];  // crea un nuevo arreglo din�mico del tama�o de la nueva capacidad

    for (int i = 0; i < numElementos; ++i) {
        nuevaLista[i] = lista[i];  // copia los elementos existentes en el nuevo arreglo
    }

    delete[] lista;  // eliminar el arreglo anterior para liberar memoria
    lista = nuevaLista; // actualiza el puntero al nuevo arreglo
}

// Constructor
ListadeAs::ListadeAs(int capacidadInicial) : capacidad(capacidadInicial), numElementos(0) //el constructor sin parametros
{
	this->capacidad = capacidad;
	numElementos = 0;
	lista = new A * [capacidad];
}

// Desconstructor
ListadeAs::~ListadeAs()
{
    for (int i = 0; i < numElementos; ++i) {
        delete lista[i];  // elimina cada objeto A almacenado
    }

    delete[] lista;  // eliminar el arreglo para liberar memoria
}

void ListadeAs::agregar(A* objeto)
{
    if (numElementos == capacidad) {
        redimensionar();  // si est� lleno, redimensionar el arreglo
    }

    lista[numElementos] = objeto;  // a�adir el objeto al final del arreglo
    numElementos++; // se incrementa el contador de elementos
}

void ListadeAs::eliminar(int id)
{
    for (int i = 0; i < numElementos; ++i) {

		if (lista[i] -> getId() == id) { // si se encuentra el objeto
			delete lista[i]; // elimina el objeto

			for (int j = i; j < numElementos - 1; ++j) { // el bucle comienza en j = i, en la posici�n del elemento que hemos eliminado
				lista[j] = lista[j + 1];  // ej, el valor de lista[1] pasa a ser el de lista[2], moviendo todos los elementos hacia la izquierda
			}

			numElementos--; // decrementa el n�mero de elementos
			return;
		}
	}
}

void ListadeAs::eliminarUltimoElemento()
{
    if (numElementos > 0) {
        delete lista[numElementos - 1];  // eliminar el �ltimo objeto
        numElementos--; // decrementa el n�mero de elementos
    }
    else {
        std::cout << "No hay objetos para eliminar.\n";
    }
}


void ListadeAs::mostrarA(int indice) const 
{
    if (indice >= 0 && indice < numElementos) { // compruebo si el �ndice proporcionado est� dentro del rango de la lista
        std::cout << "ID: " << lista[indice]->getId()
            << ", Nombre: " << lista[indice]->getNombre() << "\n";
    }
    else {
        std::cout << "Indice fuera de rango.\n";
    }
}

void ListadeAs::mostrarTodos() const
{
    if (numElementos == 0) { // compruebo si no hay elementos en la lista
        std::cout << "La lista est� vac�a.\n";
    }
    else { // si hay elementos recorre la lista completa e imprime la informaci�n de cada elemento
        for (int i = 0; i < numElementos; ++i) {
            std::cout << "ID: " << lista[i]->getId()
                << ", Nombre: " << lista[i]->getNombre() << "\n";
        }
    }
}



