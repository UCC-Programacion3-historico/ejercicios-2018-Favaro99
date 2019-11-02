#ifndef HASHENTRY_H
#define HASHENTRY_H

template<class K, class T>
class HashEntry {
private:
    T dato;
    K clave;
public:
    HashEntry(T dato, K clave) : dato(dato), clave(clave) {}

    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        HashEntry::dato = dato;
    }

    K getClave() const {
        return clave;
    }

    void setClave(K clave) {
        HashEntry::clave = clave;
    }
};

#endif //HASHENTRY_H