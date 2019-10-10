#include <iostream>
#include "../Lista/Lista.h"

using namespace std;

int main() {
    Lista<int> lis;
    int dato,l;

    cout<<"Ingresar elementos a la lista: "<<endl;

    for(int i=0; i<10; i++){
        cin>>dato;
        lis.insertar(i,dato);
    }

    cout<<"Ingrese un nuevo elemento: ";
    cin>>dato;

    cout<<"Elija donde desea ingresarlo: \n1_ Al principio \n2_ Al medio \n3_Al final";
    cin>>l;

    switch(l){
        case 1:
            lis.insertarPrimero(dato);
            break;
        case 2:
            lis.insertar((lis.getTamanio()/2),dato);
            break;
        case 3:
            lis.insertarUltimo(dato);
    }

    lis.print();
}