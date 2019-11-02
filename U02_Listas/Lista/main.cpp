//
// Created by martin on 21/8/19.
//

#include <iostream>
#include "Lista.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Argumentos: "<< endl;

    for (int i = 0; i < argc; ++i) {
        cout << i << ": " << argv[i] << endl;
    }
    return 0;
}