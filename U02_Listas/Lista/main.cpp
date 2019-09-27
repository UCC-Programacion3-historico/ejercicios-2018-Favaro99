//
// Created by martin on 21/8/19.
//

#include <iostream>
#include "Lista.h"

using namespace std;

int main() {
    Lista<int> l;

    for (int i = 0; i < 20; ++i) {
        l.insertarPrimero(i);

    }

    l.print();

    l.moverPri(19);
    l.print();


    return 0;
}