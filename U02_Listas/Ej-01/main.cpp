#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

using namespace std;

int main() {
    auto *l = new Lista<char>;
    string arr;



    for(int i=0; arr[i] != '\0'; i++){
        cin>>arr[i];
        l->insertar(i,arr[i]);
    }

    fnInvierte(l);

    int tam = l->getTamanio();

    for(int i=0; i < tam; i++){
        cout<<l->getDato(i);
    }

}