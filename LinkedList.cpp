#include <iostream>   //outputs mas faciles
using namespace std;  //imports no usar espacio
#include "LinkedList.hpp"
#include  "nodo.hpp"

LinkedList::LinkedList(){ 
  inicio = NULL;  
} 

void LinkedList::addnodo(int n){
  nodo *nuevo_nodo =  new nodo();
  
  if(inicio == NULL)// ¿Existe el primer  nodo?
  {  
      nuevo_nodo->data = n;
      inicio = nuevo_nodo;
      return;
  }
  nodo * temp = inicio;  // un nuevo nodo para validar cuantos nodos hay en la linea y saber en donde insertar el que sigue
  
  while(temp->next != NULL)
  { 
    temp = temp -> next;
  }
  
  nuevo_nodo->data = n;
  temp->next = nuevo_nodo;    
}

void LinkedList::read(){
  nodo* actual = new nodo(); // un nodo para saber el inicio
  actual = inicio;
  
  if(inicio == NULL)// verificar que la lista no este vacia
  {  
    cout<<"lista vacia";
  }
  
  while(actual != NULL)// proceder a imprimir hasta que se encuentre un valor nulo
  { 
    std::cout<<actual->data<<"->";
    actual =actual->next;
  }
  
  cout<<""<<endl; // siguiente linea
}


int LinkedList::buscar(int n){
  int j=0;
  
  nodo *nuevo_nodo = new nodo ();
  nuevo_nodo = inicio;
  
  while(nuevo_nodo != NULL)
  {
    if(nuevo_nodo->data == n)
    {
      return j;
    }
    
    j = j + 1;
    nuevo_nodo = nuevo_nodo->next;
  }
  
  return -1;
}


int LinkedList::retornar(int n){
  int j = 0;
  nodo * nuevo_nodo = new nodo();
  nuevo_nodo = inicio;
  
  while(nuevo_nodo != NULL)
  {
    if(j == n)
    {
      return nuevo_nodo->data;
    }
    
    nuevo_nodo = nuevo_nodo->next;
    j++;
  }
  
  return -1;
}


void LinkedList::eliminar(int n){
  int j = 0;
  nodo * nuevo_nodo = new nodo();
  nodo * temp = NULL;
  nuevo_nodo = inicio;
  
  if(n == 0){
    inicio = nuevo_nodo->next;
  }
  
  while (nuevo_nodo != NULL)
  {
    if(j == n)
    {
      cout<<"el valor eliminado es de: "<<nuevo_nodo->data<<endl;
      temp->next = nuevo_nodo->next; 
      return;
    }
    j++;
    temp = nuevo_nodo;
    nuevo_nodo = nuevo_nodo->next;  
  }
  return;
}


int LinkedList::Sumarpares(){
  int suma=0;
  nodo * r = inicio;
  
  while (r != NULL)
  {
    if(r->data % 2 == 0 )
    {
      suma = suma + r->data;
    }
    
    r = r->next;
  }
  
  return suma;
}


int LinkedList::SumarImpares(){
  int suma=0;
  nodo * r = inicio;
  
  while (r != NULL)
  {
    if(r->data % 2 != 0 )
    {
      suma = suma + r->data;
    }
    
    r = r->next;
  }
  
  return suma;
}


int LinkedList::mayor(){
  nodo * r = inicio;
  int n = 0;
  
  while(r != NULL)
  {
    if(n < r->data)
    {
      n = r->data;
    }
    
    r = r->next;
  }
  
  return n;
}


int LinkedList::menor(){
  nodo * r = inicio;
  int n = r->data;
  
  while(r != NULL)
  {
    if(n > r->data)
    {
      n = r->data;
    }
    
    r = r->next;
  }
  return n;
}


void LinkedList::listaRep(){
  LinkedList r;
  nodo *a = inicio;
  
  while (a != NULL)
  {
    int prueba = 0;
    nodo * b = a;
    
    while (b->next != NULL)
    {   
      if(a->data == b->data)
      {
        prueba++;
        
        if(prueba >= 2)
        {
          r.addnodo(a->data);
          break;
        }
        
      }
    
      b = b->next;
    }
    
    a = a->next;
  }
  
  r.read();
}


void LinkedList::eliminarRep(){
  nodo * indicador = inicio;
  int cuenta = 0;
  
  while (indicador != NULL)
  {
    int contador = cuenta;
    nodo * eliminador = indicador->next;
    
    while (eliminador != NULL)
    {
        contador = contador + 1;
    if(indicador->data ==  eliminador->data){
        eliminar(contador);
        contador--;
    }
    
    eliminador = eliminador->next;
    }

    indicador = indicador->next;
    cuenta =  cuenta + 1;
  }
  
}    
    
