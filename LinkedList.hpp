#include <iostream>   //outputs mas faciles
using namespace std;  //imports no usar espacio
#include "node.hpp"


class LinkedList{  //una clase que es la lista linkeada
  
  protected:
    node *inicio; // crear un node de inicio

  public:
    LinkedList();    
    void addnode(int);
    void read();
    int buscar(int);
    int retornar(int);
    void eliminar(int);
    int Sumarpares();
    int SumarImpares();
    int menor();
    int mayor();
    void listaRep();
    void eliminarRep();
    void ordenarDecreciente(int);
    void invertirLista(int);
    bool contiene(int);
    int countNodes(LinkedList L);
};