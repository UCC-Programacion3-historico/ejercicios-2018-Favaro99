#include <iostream>
#include <ostream>
#include <stdlib.h>

#include "../Arbol/ArbolBinario.h"
#include <string>

using namespace std;

class Persona {
public:
    string nombre;
    string apellido;
    int dni;

    Persona(){};

    Persona(string n, string a, int d) {
        nombre = n;
        apellido = a;
        dni = d;
    }

    bool operator==(Persona p) {
        return this->dni == p.dni;
    }

    bool operator>(Persona p) {
        return this->dni > p.dni;
    }


};

int main() {
    ArbolBinario<Persona> a;
    Persona b("Juan", "Perez", 123);
    Persona c("Pedro", "d", 234);
    Persona d("Ale", "e", 567);
    Persona e("Jose", "d", 21);
    Persona f("Maria", "s", 2344);
    Persona g("Juana", "w", 124);


    a.put(b);
    a.put(c);
    a.put(d);
    a.put(e);
    a.put(f);
    a.put(g);

    Persona dummy("","",2344);
    a.search(dummy);

    a.print();

    std::cout << "d 05/01\n" << std::endl;
    return 0;
}