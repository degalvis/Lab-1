#include <iostream>   //outputs mas faciles
using namespace std;  //imports no usar espacio
#include "nodo.hpp"

class LinkedList{  //una clase que es la lista linkeada
  protected:
    nodo *inicio; // crear un nodo de inicio

  public:
    
    LinkedList();    
    void addnodo(int);
    void read();
    void insertorder(int);
    int buscar(int);
    int retornar(int);
    void eliminar(int);
    int Sumarpares();
    int SumarImpares();
    int menor();
    int mayor();
    void listaRep();
    void eliminarRep();
};