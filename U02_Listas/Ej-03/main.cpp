#include <iostream>
#include "../Lista/Lista.h"

using namespace std;

int main() {
   Lista<int> lis;
   int dato,aBorrar;

   cout << "Ingrese elementos a la lista: ";
   for(int i=0; i<10; i++) {
       cin>>dato;
       lis.insertar(i,dato);
   }


   cout<<"Ingrese elemento a borrar: ";
   cin>>aBorrar;

   for(int i=0; i<lis.getTamanio(); i++){
       if(aBorrar == lis.getDato(i))
           lis.remover(i);
   }

   lis.print();

}