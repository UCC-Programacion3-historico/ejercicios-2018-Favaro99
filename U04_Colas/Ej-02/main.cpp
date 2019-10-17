#include <iostream>
#include "../Cola/Cola.h"
#include "../../U03_Pilas/Pila/Pila.h"

using namespace std;

int main() {
    Cola<char> C;
    Pila<char> P;
    char tmp = ' ';
    bool b = true;

    cout<<"Ingrese frase: (tipee . para finalizar)"<<endl;
    while(tmp != '.'){
        cin>>tmp;
        C.encolar(tmp);
        P.push(tmp);
    }

    while(!P.esVacia() && b){
        b = P.pop() == C.desencolar();
    }

    if(b){
        cout<<"La frase es un palindromo";
    }else{
        cout<<"La frase no es un palindromo";
    }
}