#include <iostream>
#include <stdlib.h>

#include "../Arbol/ArbolBinario.h"

int main() {
    ArbolBinario<int> a;
    srand(0);

    for (int i = 0; i < 20; ++i) {
        a.put(rand());

    }
    a.print();

    std::cout << "d 05/01\n" << std::endl;
    return 0;
}