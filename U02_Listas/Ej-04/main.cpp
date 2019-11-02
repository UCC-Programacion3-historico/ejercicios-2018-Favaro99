#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"
<<<<<<< HEAD

using namespace std;

int main() {

    Lista<int> l1,l2;
    int e;

    cout<<"Ingrese elementos de la lista 1: ";
    for(int i=0; i<3; i++){
        cin>>e;
        l1.insertar(i,e);
    }

    cout<<"Ingrese elementos de la lista 2: ";
    for(int i=0; i<3; i++){
        cin>>e;
        l2.insertar(i,e);
    }

    Lista<int> *l3;
    l3 = unir(l1,l2);

    l1.print();
    cout<<endl;

    l2.print();
    cout<<endl;

    l3->print();
=======

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
>>>>>>> 5a132da0214c8278997f00df8e27969981055393
}