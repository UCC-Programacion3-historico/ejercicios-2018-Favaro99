#ifndef NODOARBOL_H
#define NODOARBOL_H

template<class T>
class NodoArbolAVL {
public:
    T dato;
    NodoArbol<T> *izq, *der;
    char altura;

    NodoArbol(T dato) : dato(dato) {
        der = izq = nullptr;
        altura = 0;
    }
};

#endif //HASHENTRY_H