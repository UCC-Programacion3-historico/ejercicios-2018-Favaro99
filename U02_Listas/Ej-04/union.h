#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<int> unir(Lista<T> &lisA, Lista<T> &lisB) {
    Lista<T> lisC;

    for(int i=0; i<lisA.getTamanio(); i++){
        lisC.insertar(i,lisA.getDato(i));
    }

    for(int i=0; i<lisB.getTamanio(); i++){
        lisC.insertar(lisC.getTamanio(),lisB.getDato(i));
    }

    return lisC;
}



#endif //UNION_H
