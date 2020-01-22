#include <iostream>

using namespace std;

void intercambiar(int& x, int& y){
    int aux = x;
    x = y;
    y = aux;
}

void quicksort(int a[], int primero, int ultimo){
    int i,j,central;
    int pivote;
    central = (primero + ultimo) / 2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    do{
        while(a[i] < pivote) i++;
        while(a[j] > pivote) j--;
        if(i <= j){
            intercambiar(a[i], a[j]);
            i++;
            j--;
        }
    }while(i <= j);
    if(primero < j) quicksort(a, primero, j); //MISMO PROCESO CON LISTA IZQUIERDA
    if(ultimo > i) quicksort(a, i, ultimo ); //MISMO PROCESO CON LISTA DERECHA
}

int main() {
    int a[]= {8,1,4,9,6,3,5,2,7,0};

    cout<<"Arreglo original: "<<endl;
    for(int k = 0; k < 10; k++){
        cout<<a[k]<<" ";
    }

    cout<<"\nArreglo ordenador por QuickSort: "<<endl;

    quicksort(a,0,9);

    for(int k = 0; k < 10; k++){
        cout<<a[k]<<" ";
    }

}