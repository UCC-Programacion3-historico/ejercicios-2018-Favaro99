#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {
<<<<<<< HEAD
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
=======
    char txt[] = "{3*[52+(3-5)/2]-5}*2)";
    Pila<char> p;
    char tmp;
    bool correcto = true;

    for (int i = 0; txt[i] < '\0'; ++i) {
        switch (txt[i]) { //  if(txt[i] == '[' ||txt[i] == '(' ||txt[i] == '{' )
            case '(':
                p.push(')');
                break;
            case '[':
                p.push(']');
                break;
            case '{':
                p.push('}');
                break;
            case ')':
            case ']':
            case '}':
                try {
                    tmp = p.pop();
                    if (tmp != txt[i])
                        correcto = false;
                } catch (int e) {
                    correcto = false;
                }

//                if (!p.esVacia()) {
//                    tmp = p.pop();
//                    if (tmp != txt[i])
//                        correcto = false;
//                } else {
//                    correcto = false;
//                }

                break;

        }
    }

    if (correcto && p.esVacia())
        cout << "Todo OK";
    else
        cout << "No esta bien";


    std::cout << "Ejercicio 03/04\n" << std::endl;
    return 0;
}
>>>>>>> 5a132da0214c8278997f00df8e27969981055393
