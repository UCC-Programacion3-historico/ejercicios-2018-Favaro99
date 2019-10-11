#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"

int main() {
    Lista<int> a, b, *c;

    a.insertarUltimo(4);
    a.insertarUltimo(9);
    b.insertarUltimo(41);
    b.insertarUltimo(43);
    b.insertarUltimo(42);

    c = unir(a, b);

    c->print();

    std::cout << "Ejercicio 01/04\n" << std::endl;
    return 0;
}