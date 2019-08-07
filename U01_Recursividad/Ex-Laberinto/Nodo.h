#ifndef NODO_H_H
#define NODO_H_H

#include <iostream>

template<class T>
class Nodo {
private:
    T dato;
    Nodo<T> *next;
public:
    Nodo(T dato) {
        this->dato = dato;
        next = NULL;
    }

    Nodo(T dato, Nodo<T> *next) : dato(dato), next(next) {}

    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        Nodo::dato = dato;
    }

    Nodo<T> *getNext() const {
        return next;
    }

    void setNext(Nodo<T> *next) {
        Nodo::next = next;
    }


};


#endif //INC_02_LISTAS_NODO_H_H
