#include <iostream>
using namespace std;

// Clase base
class Vehiculo {

    public: // Permite acceso en herencia protegida
        string marca;
        string modelo;

    private:
        int ano;

    public:
        Vehiculo(string m, string mod, int a) : marca(m), modelo(mod), ano(a) {}

    void mostrarInformacion() {
        cout << "Marca: " << marca << ", Modelo: " << modelo << ", Año: " << ano << endl;
    }
};

// Herencia pública
class Furgoneta : public Vehiculo {

    private:
        int numeroPuertas;

    public:
        Furgoneta(string m, string mod, int a, int puertas) : Vehiculo(m, mod, a), numeroPuertas(puertas) {}

    void tocarBocina() {
        cout << "¡Bip bip!" << endl;
    }
};

// Herencia privada
class Motocicleta : private Vehiculo {

    private:
        string tipoManillar;

    public:
        Motocicleta(string m, string mod, int a, string manillar) : Vehiculo(m, mod, a), tipoManillar(manillar) {}

    void mostrarInformacion() { // Sobreescritura
        cout << "Tipo de manillar: " << tipoManillar << endl;
    }
};

// Herencia protegida
class Camion : protected Vehiculo {

    private:
        int capacidadCarga;

    public:
        Camion(string m, string mod, int a, int carga) : Vehiculo(m, mod, a), capacidadCarga(carga) {}
        
    void mostrarCapacidad() {
        cout << "Capacidad de carga: " << capacidadCarga << " kg" << endl;
    }
    void mostrarInformacion() { // Sobreescritura
        cout << "marca: " << marca << " modelo: " << " Carga: " << capacidadCarga << endl;
    }
};

// Herencia múltiple
class Furgomoto : public Furgoneta, public Motocicleta {
    public:
        Furgomoto(string m, string mod, int a, int
            puertas, string manillar) : Furgoneta(m, mod, a, puertas), Motocicleta(m, mod, a, manillar) {}
};

// Ejemplo de uso
int main() {
    Furgoneta miAuto("Toyota", "Corolla", 2020, 4);
    miAuto.mostrarInformacion();
    miAuto.tocarBocina();

    Motocicleta miMoto("Yamaha", "YZF-R3", 2021, "Deportivo");
    miMoto.mostrarInformacion();

    Camion miCamion("Volvo", "FMX", 2019, 18000);
    miCamion.mostrarCapacidad();

    Furgomoto miFurgomoto("Toyota", "Corolla", 2020, 4, "Deportivo");
    miFurgomoto.Furgoneta::mostrarInformacion();

    return 0;
}
