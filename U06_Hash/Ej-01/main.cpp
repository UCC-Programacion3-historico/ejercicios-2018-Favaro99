#include <iostream>
#include <string>
#include "../HashMap/HashMap.h"

using namespace std;


unsigned int miHashF(int clave);


int main() {
    HashMap<int, string> th(13);

    th.put(325, "Hola");
    th.put(425, "Chau");
    th.put(5, "Casa");
    th.put(3, "PC");

    //th.print();
    std::cout << "Ejercicio 05/01\n" << std::endl;
    return 0;
}

unsigned int miHashF(string clave) {
    unsigned int idx=1;
    for (int i = 0; i < clave.length(); ++i) {
        idx *= clave[i]*clave[i];
    }

    return idx;
}