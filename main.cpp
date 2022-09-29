#include <iostream>   //outputs mas faciles
#include "LinkedList.hpp"
#include "nodo.hpp"

using namespace std;  //imports no usar espacio

int main(){
  LinkedList a;
  a.addnodo(1);
  a.addnodo(1);
  a.addnodo(1);
  a.addnodo(1);
  a.addnodo(1);
  a.addnodo(1);
  a.addnodo(1);
  a.addnodo(1);
  a.addnodo(1);
  a.addnodo(1);
  a.addnodo(1);
  a.addnodo(1);
  a.addnodo(1);
  a.addnodo(1);
  a.addnodo(5);
  a.read();
  a.eliminarRep();
 /* cout<<"el resultado de sumar los pares es: "<< a.Sumarpares()<<endl;
  cout<<"el resultado de sumar los inpares es: "<< a.SumarInpares()<<endl;
  a.eliminar(1);
  cout<<"el  valor de esta en la posicion:  "<<" "<<a.buscar(6)<<endl;
  cout<<"el valor en la posicion 1 es igual a "<<a.retornar(1)<<endl;
  cout<<a.mayor()<<endl;
  cout<<a.menor()<<endl;*/
  a.read();
 // a.listaRep();
  return 0;
}