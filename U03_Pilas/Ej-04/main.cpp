#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {
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