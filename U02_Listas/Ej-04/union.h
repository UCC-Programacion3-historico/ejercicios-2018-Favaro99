#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
<<<<<<< HEAD
Lista<int> *unir(Lista<T> &lisA, Lista<T> &lisB) {

    auto *lisC = new Lista<T>();

    for(int i=0; i<lisA.getTamanio(); i++){
        lisC->insertarUltimo(lisA.getDato(i));
    }

    for(int i=0; i<lisB.getTamanio(); i++){
        lisC->insertarUltimo(lisB.getDato(i));
    }

    return lisC;
=======
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB) {
    Lista<T> *l = new Lista<T>();

    for (int i = 0; i < lisA.getTamanio(); ++i) {
        l->insertarUltimo(lisA.getDato(i));
    }
    for (int i = 0; i < lisB.getTamanio(); ++i) {
        l->insertarUltimo(lisB.getDato(i));
    }
    return l;
>>>>>>> 5a132da0214c8278997f00df8e27969981055393
}



#endif //UNION_H
