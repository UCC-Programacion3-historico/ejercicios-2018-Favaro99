//
// Created by favaro on 14/10/19.
//

#ifndef PROGRAMACION3_COLAPRIORIDAD_H
#define PROGRAMACION3_COLAPRIORIDAD_H

#include "../Cola/Cola.h"

class ColaPrioridad{
    Cola<int> *colas{};
    int tamanio;

    explicit ColaPrioridad(int cant){
        tamanio = cant;
        colas = new Cola<int>[cant];
    }

    void encolar(int d,int prioridad){
        if(prioridad >= 0 && prioridad<tamanio){
            colas[prioridad].encolar(d);
        }else{
            throw 252;
        }
    }

    int desencolar(){
        for(int i=0; i<tamanio; i++){
            if(!colas->esVacia()){
                return colas[i].desencolar();
            }
            throw 404;
        }
    }


};




#endif //PROGRAMACION3_COLAPRIORIDAD_H
