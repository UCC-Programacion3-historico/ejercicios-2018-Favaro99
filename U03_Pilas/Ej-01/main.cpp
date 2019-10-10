#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {
  Pila<char> p;
  char arr[100];

  cout<<"Ingrese una palabra: ";
  cin>>arr;

  for(int i=0; arr[i] != '\0' ; i++) {
      p.push(arr[i]);
  }

  while(!p.esVacia()){
      cout<<p.pop();
  }

}