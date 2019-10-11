#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {
    Pila<char> p1;
    char arr[100];

    cout<<"Ingrese la expresion matematica: ";
    cin>>arr;

    for(int i=0; arr[i] != '\0'; i++) {
        if (arr[i] == '(' || arr[i] == '[' || arr[i] == '{')
            p1.push(arr[i]);
        if(arr[i] == ')' || arr[i] == '}' || arr[i] == ']'){
            p1.pop();
        }
    }

    if(p1.esVacia()){
        cout<<"Los parentesis estan balanceados"<<endl;
    }
    else
        cout<<"Los parentesis no estan balanceados";
}
