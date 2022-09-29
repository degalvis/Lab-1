#include <iostream>   //outputs mas faciles
#include "nodo.hpp"

using namespace std;  //imports no usar espacio

nodo::nodo(){
  data = 0;
  next = NULL;
}
nodo::nodo(int data){
  data = data;
  next = NULL;
}

