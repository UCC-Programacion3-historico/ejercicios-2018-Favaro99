//
// Created by martin on 21/8/19.
//

#include <iostream>
#include "Lista.h"
using namespace std;

int main(){
    Lista<int> l;

    l.insertarPrimero(3);
    l.insertarPrimero(2);
    l.insertarPrimero(1);

    cout << "Hola mindo"<< l.getTamanio() << endl;


    return 0;
}