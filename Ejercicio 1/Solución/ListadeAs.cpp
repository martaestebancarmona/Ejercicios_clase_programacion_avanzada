#include "ListadeAs.h"

void ListadeAs::redimensionar()
{
    capacidad *= 2;  // Duplicamos la capacidad
    A** nuevaLista = new A * [capacidad];  // Nuevo arreglo con mayor capacidad
    for (int i = 0; i < numElementos; ++i) {
        nuevaLista[i] = lista[i];  // Copiar los elementos al nuevo arreglo
    }
    delete[] lista;  // Liberar el arreglo anterior
    lista = nuevaLista;
}

ListadeAs::ListadeAs(int capacidadInicial) : capacidad(capacidadInicial), numElementos(0) //el constructor sin parametros
{
	this->capacidad = capacidad;
	numElementos = 0;
	lista = new A * [capacidad];
}

ListadeAs::~ListadeAs()
{
    for (int i = 0; i < numElementos; ++i) {
        delete lista[i];  // Eliminar cada objeto A
    }
    delete[] lista;  // Liberar el arreglo dinámico
}

void ListadeAs::agregar(A* objeto)
{
    if (numElementos == capacidad) {
        redimensionar();  // Si está lleno, redimensionar el arreglo
    }
    lista[numElementos] = objeto;  // Añadir el objeto al final del arreglo
    numElementos++;
}

void ListadeAs::eliminar(int id)
{
    for (int i = 0; i < numElementos; ++i) {
		if (lista[i]->getId() == id) {  // Si se encuentra el objeto
			delete lista[i];  // Eliminar el objeto
			for (int j = i; j < numElementos - 1; ++j) {
				lista[j] = lista[j + 1];  // Mover los elementos
			}
			numElementos--;  // Decrementar el número de elementos
			return;
		}
	}
}



void ListadeAs::eliminarUltimoElemento()
{
    if (numElementos > 0) {
        delete lista[numElementos - 1];  // Eliminar el último objeto
        numElementos--;
    }
    else {
        std::cout << "No hay objetos para eliminar.\n";
    }
}



void ListadeAs::mostrarA(int indice) const 
{
    if (indice >= 0 && indice < numElementos) {
        std::cout << "ID: " << lista[indice]->getId()
            << ", Nombre: " << lista[indice]->getNombre() << "\n";
    }
    else {
        std::cout << "Indice fuera de rango.\n";
    }
}

void ListadeAs::mostrarTodos() const
{
    if (numElementos == 0) {
        std::cout << "La lista está vacía.\n";
    }
    else {
        for (int i = 0; i < numElementos; ++i) {
            std::cout << "ID: " << lista[i]->getId()
                << ", Nombre: " << lista[i]->getNombre() << "\n";
        }
    }
}



