#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"

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
}