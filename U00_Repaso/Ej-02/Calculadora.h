#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H

template<class T, class P>
class Calculadora {
public:
    T suma(T a, T b);

    T resta(T a, T b);

    P divi(T a, T b);

    T multi(T a, T b);
};

template<class T, class P>
T Calculadora<T, P>::suma(T a, T b) {
    return a + b;
}

template<class T, class P>
T Calculadora<T, P>::resta(T a, T b) {
    return a - b;
}

template<class T, class P>
T Calculadora<T, P>::multi(T a, T b) {
    return a * b;
}

template<class T, class P>
P Calculadora<T, P>::divi(T a, T b) {
    return (P)a / b;
}

#endif //REPASO_CALCULADORA_H
