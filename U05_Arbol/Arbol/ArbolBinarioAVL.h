#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include <stdexcept>
#include <iostream>
#include "NodoArbol.h"

template<class T>
class ArbolBinarioAVL {
private:
    NodoArbol<T> *raiz;
public:
    ArbolBinario();

    /**
     * Agrega un dato al árbol
     * @param clave Clave para agregar el dato
     * @param dato Dato a agregar
     */
    void put(T dato) {
        raiz = put(dato, raiz);
    };

    /**
     * Busca un dato en el árbol. Si no esta el dato en el árbol
     * tira una excepción
     * @param clave Valor a buscar
     * @return el valor buscado
     */
    T search(T dato) {
        return search(dato, raiz);
    }

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

    NodoArbol<T> *remove(T dato, NodoArbol<T> *r);

    NodoArbol<T> *buscarMax(NodoArbol<T> *r, bool *encontre);


    int altura(NodoArbol<T> *r) {
        if (r == nullptr)
            return -1;
        else
            return r->altura;
    }

    NodoArbol<T> *rotarIzq(NodoArbol<T> *k2) {
        NodoArbol<T> *k1 = k2->izq;
        k2->izq =k1->der;
        k1->der =k2;
        k2->altura = max(altura(k2->izq), altura(k2->der)) + 1;
        k1->altura = max(altura(k1->izq), k2->altura) + 1;
        return k1;
    }


    NodoArbol<T> *rotarDer(NodoArbol<T> *k1) {
        NodoArbol<T> *k2 = k1->der;
        k1->der =k2->izq;
        k2->izq =k1;
        k1->altura = max(altura(k1->izq), altura(k1->der)) + 1;
        k2->altura = max(altura(k2->der), k1->altura) + 1;
        return k2;
    }

    NodoArbol<T> *rotarDobleIzq(NodoArbol<T> *k3) {
        k3->izq =rotarDer(k3->izq);
        return rotarIzq(k3);
    }

    NodoArbol<T> *rotarDobleDer(NodoArbol<T> *k1) {
        k1->der =rotarIzq(k1->der);
        return rotarDer(k1);
    }

    int max(int a, int b) {
        if (a > b)
            return a;
        else
            return b;
    }

    void print(bool esDerecho, const std::string& identacion, NodoArbol<T> *r);
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
    //TODO: hacer destructor
}


/**
 * Busca un dato en el árbol. Si no esta el dato en el árbol
 * tira una excepción
 * @param clave Valor a buscar
 * @return el valor buscado
 */


/**
 * Agrega un dato al árbol
 * @param clave Clave para agregar el dato
 * @param dato Dato a agregar
 */



/**
 * Elimina un dato del árbol
 * @param clave Clave para identificar el nodo a borrar
 */
template<class T>
void ArbolBinario<T>::remove(T dato) {
    raiz = remove(dato, raiz);
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
    inorder(raiz);
}


/**
 * Recorre un árbol en postorden
 */
template<class T>
void ArbolBinario<T>::postorder() {
    postorder(raiz);
}


/**
 * Muestra un árbol por consola
 */
template<class T>
void ArbolBinario<T>::print() {
    print(true, "", raiz);
}

template<class T>
NodoArbol<T> *ArbolBinario<T>::put(T dato, NodoArbol<T> *r) {

    if (r == nullptr) {
        return new NodoArbol<T>(dato);
    }


    if (dato < r->dato) {
        r->izq =put(dato, r->izq);
        if (altura(r->izq) - altura(r->der) == 2) {
            if (dato < r->izq->dato)
                r = rotarIzq(r);
            else
                r = rotarDobleIzq(r);
        }
    } else if (dato > r->dato) {
        r->der =put(dato, r->der);
        if (altura(r->der) - altura(r->izq) == 2) {
            if (dato > r->der->dato)
                r = rotarDer(r);
            else
                r = rotarDobleDer(r);
        }
    } else { // Son iguales

        throw 404;
    }

    if (altura(r->izq) > altura(r->der))
        r->altura = altura(r->izq) + 1;
    else
        r->altura = altura(r->der) + 1;

    return r;
}

template<class T>
T ArbolBinario<T>::search(T dato, NodoArbol<T> *r) {
    if (r == nullptr) {
        throw std::out_of_range("Elemento no encontrado");
    }
    if (r->dato == dato)
        return r->dato;
    if (r->dato > dato)
        return search(dato, r->izq);
    else
        return search(dato, r->der);
}

template<class T>
void ArbolBinario<T>::preorder(NodoArbol<T> *r) {
    if (r == nullptr)
        return;

    std::cout << r->dato << " ";
    preorder(r->izq);
    preorder(r->der);
}

template<class T>
void ArbolBinario<T>::inorder(NodoArbol<T> *r) {
    if (r == nullptr)
        return;

    inorder(r->izq);
    std::cout << *(r->dato) << '\n';
    inorder(r->der);
}

template<class T>
void ArbolBinario<T>::posorder(NodoArbol<T> *r) {
    if (r == nullptr)
        return;

    posorder(r->izq);
    posorder(r->der);
    std::cout << r->dato << " ";
}

template<class T>
NodoArbol<T> *ArbolBinario<T>::remove(T dato, NodoArbol<T> *r) {
    NodoArbol<T> *aux;
    if (r == nullptr) {
        throw 404;
    }
    if (r->dato == dato) {
        // Borrar nodo
        if (r->izq == nullptr && r->der == nullptr) {
            delete r;
            return nullptr;
        } else if (r->izq == nullptr && r->der != nullptr) {
            aux = r->der;
            delete r;
            return aux;
        } else if (r->izq != nullptr && r->der == nullptr) {
            aux = r->izq;
            delete r;
            return aux;
        } else if (r->izq != nullptr && r->der != nullptr) {
            bool enc;
            if (r->izq->der != nullptr) {
                aux = buscarMax(r->izq, &enc);
                aux->der =r->der;
                aux->izq =r->izq;
            } else {
                aux = r->izq;
                r->izq->der =r->der;
            }
            delete r;
            return aux;
        }
    } else if (r->dato > dato) {
        r->izq =remove(dato, r->izq);
    } else {
        r->der =remove(dato, r->der);
    }
    return r;
}


template<class T>
NodoArbol<T> *ArbolBinario<T>::buscarMax(NodoArbol<T> *r, bool *encontre) {
    NodoArbol<T> *ret;
    *encontre = false;

    if (r->der == nullptr) {
        *encontre = true;
        return r;
    }

    ret = buscarMax(r->der, encontre);
    if (*encontre) {
        r->der =nullptr;
        *encontre = false;
    }

    return ret;

}

template<class T>
void ArbolBinario<T>::print(bool esDerecho, const std::string& identacion, NodoArbol<T> *r) {
    if (r->der != nullptr) {
        print(true, identacion + (esDerecho ? "     " : "|    "), r->der);
    }
    std::cout << identacion;
    if (esDerecho) {
        std::cout << " /";
    } else {
        std::cout << " \\";
    }
    std::cout << "-- ";
    std::cout << r->dato << std::endl;
    if (r->izq != NULL) {
        print(false, identacion + (esDerecho ? "|    " : "     "), r->izq);
    }
}


#endif //HASHMAP_H