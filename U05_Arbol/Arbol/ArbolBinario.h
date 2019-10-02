#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include "NodoArbol.h"

template<class T>
class ArbolBinario {
private:
    NodoArbol<T> *raiz;
public:
    ArbolBinario();

    void put(T dato);

    T search(T dato);

    void remove(T dato);

    void preorder();

    void inorder();

    void postorder();

    ~ArbolBinario();

    bool esVacio();

    void print();

private:
    NodoArbol<T> *put(T dato, NodoArbol<T> *r);

    T search(T dato, NodoArbol<T> *r);

    void preorder(NodoArbol<T> *r);

    void inorder(NodoArbol<T> *r);

    void posorder(NodoArbol<T> *r);
};


/**
 * Constructor del Arbol
 * @tparam K Clave por la cual va a ordenar el árbol
 * @tparam T Valor guardado por el árbol
 */
template<class T>
ArbolBinario<T>::ArbolBinario() {
    raiz = nullptr;
}


/**
 * Destructor del Arbol
 */
template<class T>
ArbolBinario<T>::~ArbolBinario() {

}


/**
 * Busca un dato en el árbol. Si no esta el dato en el árbol
 * tira una excepción
 * @param clave Valor a buscar
 * @return el valor buscado
 */
template<class T>
T ArbolBinario<T>::search(T dato) {
    return search(dato, raiz);
}


/**
 * Agrega un dato al árbol
 * @param clave Clave para agregar el dato
 * @param dato Dato a agregar
 */
template<class T>
void ArbolBinario<T>::put(T dato) {
    raiz = put(dato, raiz);
}


/**
 * Elimina un dato del árbol
 * @param clave Clave para identificar el nodo a borrar
 */
template<class T>
void ArbolBinario<T>::remove(T dato) {

}


/**
 * Informa si un árbol esta vacío
 * @return
 */
template<class T>
bool ArbolBinario<T>::esVacio() {
    return raiz == nullptr;
}


/**
 * Recorre un árbol en preorden
 */
template<class T>
void ArbolBinario<T>::preorder() {
    preorder(raiz);
}


/**
 * Recorre un árbol en orden
 */
template<class T>
void ArbolBinario<T>::inorder() {

}


/**
 * Recorre un árbol en postorden
 */
template<class T>
void ArbolBinario<T>::postorder() {

}


/**
 * Muestra un árbol por consola
 */
template<class T>
void ArbolBinario<T>::print() {

}

template<class T>
NodoArbol<T> *ArbolBinario<T>::put(T dato, NodoArbol<T> *r) {

    if (r == nullptr) {
        return new NodoArbol<T>(dato);
    }

    if (r->getDato() == dato) {
        throw 200;
    }

    if (r->getDato() > dato) {
        r->setIzq(put(dato, r->getIzq()));
    } else {
        r->setDer(put(dato, r->getDer()));
    }
    return r;
}

template<class T>
T ArbolBinario<T>::search(T dato, NodoArbol<T> *r) {

    if (r == nullptr) {
        throw 404;
    }
    if (r->getDato() == dato)
        return r->getDato();
    if (r->getDato() > dato)
        return search(dato, r->getIzq());
    else
        return search(dato, r->getDer());
}

template<class T>
void ArbolBinario<T>::preorder(NodoArbol<T> *r) {
    if (r == nullptr)
        return;

    std::cout << r->getDato() << " ";
    preorder(r->getIzq());
    preorder(r->getDer());
}

template<class T>
void ArbolBinario<T>::inorder(NodoArbol<T> *r) {
    if (r == nullptr)
        return;

    inorder(r->getIzq());
    std::cout << r->getDato() << " ";
    inorder(r->getDer());
}

template<class T>
void ArbolBinario<T>::posorder(NodoArbol<T> *r) {
    if (r == nullptr)
        return;

    posorder(r->getIzq());
    posorder(r->getDer());
    std::cout << r->getDato() << " ";
}


#endif //HASHMAP_H