#include <iostream>
#include "../Cola/Cola.h"
#include "../../U03_Pilas/Pila/Pila.h"

using namespace std;

int main() {
    Cola<char> c1, c2;
    char dato;

    cout << "Ingrese 3 elementos a la cola 1: " << endl;
    for (int i = 0; i < 3; i++) {
        cin >> dato;
        c1.encolar(dato);
    }

    cout << "Ingrese 3 elementos a la cola 2: " << endl;
    for (int i = 0; i < 3; i++) {
        cin >> dato;
        c2.encolar(dato);
    }

    bool b = true;

    for(int i=0; i<3; i++) {
        if (c1.desencolar() != c2.desencolar()) {
            cout << "Las colas son distintas";
            b = false;
            break;
        }
    }
    if(b){
        cout<<"Las pilas son iguales";
    }
}