#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<int> *unir(Lista<T> &lisA, Lista<T> &lisB) {

    auto *lisC = new Lista<T>();

    for(int i=0; i<lisA.getTamanio(); i++){
        lisC->insertarUltimo(lisA.getDato(i));
    }

    for(int i=0; i<lisB.getTamanio(); i++){
        lisC->insertarUltimo(lisB.getDato(i));
    }

    return lisC;
}



#endif //UNION_H
