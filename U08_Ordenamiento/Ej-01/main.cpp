#include <iostream>

using namespace std;

void intercambiar(int& x, int& y){
    int aux = x;
    x = y;
    y = aux;
}

void ordBubble(int a[], int n){
    bool interruptor = true;
    int pasada, j;
    //Bucle externo el cual controla la cantidad de pasadas
    for(pasada = 0; pasada < n-1 && interruptor; pasada++){
        interruptor = false;
        //Bucle interno controla cada pasada individualmente
        for(j = 0; j < n - pasada - 1; j++){
            if(a[j] > a[j+1]){
                interruptor = true;
                intercambiar(a[j], a[j+1]);
            }
        }
    }
}


int main() {
    int a[] = {50,20,40,80,30};

    cout<<"Sin ordenar:"<<endl;
    for(int i = 0; i < 5; i++){
        cout<<a[i]<< " ";
    }

    cout<<endl;

    ordBubble(a,5);

    cout<<"Ordenado: "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<a[i]<< " ";
    }
}