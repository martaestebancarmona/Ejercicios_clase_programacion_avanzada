#include <iostream>
#include <string>
#include "ListadeAs.h"
#include "A.h"

int main() {
    ListadeAs listaDeAs;

    // Crear algunos objetos A
    A* a1 = new A(1, "Objeto 1");
    A* a2 = new A(2, "Objeto 2");
    A* a3 = new A(3, "Objeto 3");

    // Agregar objetos a la lista
    listaDeAs.agregar(a1);
    listaDeAs.agregar(a2);
    listaDeAs.agregar(a3);

    // Mostrar todos los objetos
    std::cout << "Objetos en la lista:\n";
    listaDeAs.mostrarTodos();

    // Eliminar el último objeto
    listaDeAs.eliminarUltimoElemento();

    // Mostrar la lista después de eliminar
    std::cout << "Despues de eliminar el ultimo objeto:\n";
    listaDeAs.mostrarTodos();

    // Mostrar un objeto específico
    std::cout << "Mostrar el primer objeto:\n";
    listaDeAs.mostrarA(0);

    return 0;
}
//---- OTRA MANERA DE HACERLO ----
// Clase A
//class A {
//private:
//    int id;
//    std::string nombre;
//    static int contadorInstancias;  // Variable estática para contar instancias
//
//public:
//     Constructor parametrizado
//    A(int id, const std::string& nombre) : id(id), nombre(nombre) {
//        contadorInstancias++;
//    }
//
//     Destructor
//    ~A() {
//        contadorInstancias--;
//    }
//
//     Getters y setters
//    int getId() const {
//        return id;
//    }
//
//    void setId(int id) {
//        this->id = id;
//    }
//
//    std::string getNombre() const {
//        return nombre;
//    }
//
//    void setNombre(const std::string& nombre) {
//        this->nombre = nombre;
//    }
//
//     Método estático para obtener el contador de instancias
//    static int getContadorInstancias() {
//        return contadorInstancias;
//    }
//};
//
// Inicialización de la variable estática
//int A::contadorInstancias = 0;
//
// Clase ListadeAs
//class ListadeAs {
//private:
//    std::vector<A> lista;  // Vector dinámico de objetos A
//
//public:
//     Método para agregar un objeto A al vector
//    void agregarA(const A& objeto) {
//        lista.push_back(objeto);
//    }
//
//     Método para eliminar el último objeto del vector
//    void eliminarUltimoA() {
//        if (!lista.empty()) {
//            lista.pop_back();
//        }
//        else {
//            std::cout << "No hay objetos para eliminar.\n";
//        }
//    }
//
//     Método para mostrar la información de un objeto específico en el vector
//    void mostrarA(int indice) const {
//        if (indice >= 0 && indice < lista.size()) {
//            std::cout << "ID: " << lista[indice].getId()
//                << ", Nombre: " << lista[indice].getNombre() << "\n";
//        }
//        else {
//            std::cout << "Indice fuera de rango.\n";
//        }
//    }
//
//     Método para mostrar la información de todos los objetos en el vector
//    void mostrarTodos() const {
//        if (lista.empty()) {
//            std::cout << "La lista está vacía.\n";
//        }
//        else {
//            for (const auto& objeto : lista) {
//                std::cout << "ID: " << objeto.getId()
//                    << ", Nombre: " << objeto.getNombre() << "\n";
//            }
//        }
//    }
//};
//
// Función principal
//int main() {
//    ListadeAs listaDeAs;
//
//     Crear algunos objetos A
//    A a1(1, "Objeto 1");
//    A a2(2, "Objeto 2");
//    A a3(3, "Objeto 3");
//
//     Agregar objetos a la lista
//    listaDeAs.agregarA(a1);
//    listaDeAs.agregarA(a2);
//    listaDeAs.agregarA(a3);
//
//     Mostrar todos los objetos
//    std::cout << "Objetos en la lista:\n";
//    listaDeAs.mostrarTodos();
//
//     Eliminar el último objeto
//    listaDeAs.eliminarUltimoA();
//
//     Mostrar la lista después de eliminar
//    std::cout << "Después de eliminar el último objeto:\n";
//    listaDeAs.mostrarTodos();
//
//     Mostrar un objeto específico
//    listaDeAs.mostrarA(0);
//
//    return 0;
//}