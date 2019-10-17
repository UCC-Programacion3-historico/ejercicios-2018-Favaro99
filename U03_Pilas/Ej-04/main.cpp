#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {
    Pila<char> p1;
    char arr[100];
    char tmp;
    bool b = true;
    cout<<"Ingrese la expresion matematica: ";
    cin>>arr;

    for(int i=0; arr[i] != '\0'; i++){
        switch (arr[i]){
            case '(':
                p1.push(')');
                break;
            case '{':
                p1.push('}');
                break;
            case '[':
                p1.push(']');
                break;
            case ')':
            case '}':
            case ']':
                try {
                    tmp = p1.pop();
                    if (tmp != arr[i])
                        b = false;
                } catch (int e) {
                    b = false;
                }

                }
                }
        }
    if(p1.esVacia() && b){
        cout<<"Los parentesis estan balanceados"<<endl;
    }
    else
        cout<<"Los parentesis no estan balanceados";
}
