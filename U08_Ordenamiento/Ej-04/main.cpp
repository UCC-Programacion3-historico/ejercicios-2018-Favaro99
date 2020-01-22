#include <iostream>

using namespace std;

void intercambiar(int& x, int& y){
    int aux = x;
    x = y;
    y = aux;
}

void ordShell(int a[], int n){
    int salto, i,j,k;

    salto = n/2;

    while(salto > 0) {
        for (i = salto; i < n; i++) {
            j = i - salto;
            while (j >= 0) {
                k = j + salto;
                if (a[j] <= a[k]) {
                    j = -1; //Par de elementos ordenados
                } else {
                    intercambiar(a[j], a[j + 1]);
                    j -= salto;
                }
            }
        }
        salto = salto / 2;
    }
}

int main() {
    int a[] = {6,1,5,2,3,4,0};
    
    cout<<"Arreglo original: "<<endl;
    for(int m = 0; m < 7; m++){
        cout<<a[m]<<" ";
    }
    
    ordShell(a,7);
    
    cout<<"\nArreglo ordenado por ordShell: "<<endl;

    for(int m = 0; m < 7; m++){
        cout<<a[m]<<" ";
    }
}