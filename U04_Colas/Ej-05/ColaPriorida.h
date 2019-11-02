//
// Created by martin on 11/10/19.
//
#include "../Cola/Cola.h"

#ifndef PROGRAMACION3_COLAPRIORIDA_H
#define PROGRAMACION3_COLAPRIORIDA_H


class ColaPriorida {
    Cola<int> *colas;
    int tamanio;
    ColaPriorida(int cant){
        tamanio = cant;
        colas = new Cola<int>[cant];
    }

    void encolar(int d, int prioridad) {
        if (prioridad >= 0 && prioridad < tamanio)
            colas[prioridad].encolar(d);
        else
            throw 252;
    }

    int desencolar() {
        for (int i = 0; i < tamanio; ++i) {
            if (!colas[i].esVacia())
                return colas[i].desencolar();
        }
        throw 404;
    }
};


#endif //PROGRAMACION3_COLAPRIORIDA_H
