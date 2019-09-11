#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

/**
 * Clase que implementa una Pila generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Pila {
private:
    Nodo<T> *tope;
public:
    Pila();

    ~Pila();

    void push(T dato);

    T pop();

    T peek();

    bool esVacia();
};


/**
 * Constructor de la clase Pila
 * @tparam T
 */
template<class T>
Pila<T>::Pila() {
    tope = nullptr;
}


/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los nodos
 * utilizados en la lista
 * @tparam T
 */
template<class T>
Pila<T>::~Pila() {
    while (tope != nullptr)
        pop();
}


/**
 * Inserta un dato en la pila
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Pila<T>::push(T dato) {

    Nodo<T> *nuevo;
    nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    nuevo->setSiguiente(tope);
    tope = nuevo;
}


/**
 * Obtener el dato de la pila
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T Pila<T>::pop() {
    T dato;
    Nodo<T> *aBorrar = tope;

    if (tope == nullptr)
        throw 404;

    dato = tope->getDato();
    tope = tope->getSiguiente();
    delete aBorrar;
    return dato;
}

template<class T>
T Pila<T>::peek() {
    if (tope == nullptr)
        throw 404;
    return tope->getDato();
}

/**
 * Responde si la pila se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Pila<T>::esVacia() {
    return tope == nullptr;
}

#endif //LISTA_H