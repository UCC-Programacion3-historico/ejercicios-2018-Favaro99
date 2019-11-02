#include "../Lista/Lista.h"

#ifndef FNINVIERTE_H
#define FNINVIERTE_H


template<class T>
void fnInvierte(Lista<T> *lis);


template<class T>
void fnInvierte(Lista<T> *lis) {
    T aux, aux2;
    int tam = lis->getTamanio();

<<<<<<< HEAD
template <class T>
void fnInvierte (Lista<T> *lis){
    T aux, aux2;
    int tam = lis->getTamanio();
=======
    for (int i = 0; i < tam / 2; ++i) {
        aux = lis->getDato(i);
        aux2 = lis->getDato(tam - 1 - i);
        lis->reemplazar(i,aux2);
        lis->reemplazar(tam - 1 - i,aux);
    }
>>>>>>> 5a132da0214c8278997f00df8e27969981055393

    for (int i=0; i<tam/2; i++){
        aux = lis->getDato(i);
        aux2 = lis->getDato(tam -1 -i);
        lis->reemplazar(i, aux2);
        lis->reemplazar(tam -1 -i, aux);
    }
}


#endif //FNINVIERTE_H
