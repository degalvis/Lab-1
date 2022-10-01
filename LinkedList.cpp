#include <iostream>  //outputs mas faciles
using namespace std; // imports no usar espacio
#include "LinkedList.hpp"
#include "node.hpp"

LinkedList::LinkedList()
{
  inicio = NULL;
}

void LinkedList::addnode(int n)
{
  node *nuevo_node = new node();

  if (inicio == NULL) // ¿Existe el primer  node?
  {
    nuevo_node->data = n;
    inicio = nuevo_node;
    return;
  }
  node *temp = inicio; // un nuevo node para validar cuantos nodes hay en la linea y saber en donde insertar el que sigue

  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  nuevo_node->data = n;
  temp->next = nuevo_node;
}

void LinkedList::read()
{
  node *actual = new node(); // un node para saber el inicio
  actual = inicio;

  if (inicio == NULL) // verificar que la lista no este vacia
  {
    cout << "lista vacia";
  }

  while (actual != NULL) // proceder a imprimir hasta que se encuentre un valor nulo
  {
    std::cout << actual->data << "->";
    actual = actual->next;
  }

  cout << "" << endl; // siguiente linea
}

int LinkedList::buscar(int n)
{
  int j = 0;

  node *nuevo_node = new node();
  nuevo_node = inicio;

  while (nuevo_node != NULL)
  {
    if (nuevo_node->data == n)
    {
      return j;
    }

    j = j + 1;
    nuevo_node = nuevo_node->next;
  }

  return -1;
}

int LinkedList::retornar(int n)
{
  int j = 0;
  node *nuevo_node = new node();
  nuevo_node = inicio;

  while (nuevo_node != NULL)
  {
    if (j == n)
    {
      return nuevo_node->data;
    }

    nuevo_node = nuevo_node->next;
    j++;
  }

  return -1;
}

void LinkedList::eliminar(int n)
{
  int j = 0;
  node *nuevo_node = new node();
  node *temp = NULL;
  nuevo_node = inicio;

  if (n == 0)
  {
    inicio = nuevo_node->next;
  }

  while (nuevo_node != NULL)
  {
    if (j == n)
    {
      cout << "el valor eliminado es de: " << nuevo_node->data << endl;
      temp->next = nuevo_node->next;
      return;
    }
    j++;
    temp = nuevo_node;
    nuevo_node = nuevo_node->next;
  }
  return;
}

int LinkedList::Sumarpares()
{
  int suma = 0;
  node *r = inicio;

  if(r == NULL){
    cout << "Lista vacía" << endl;
  }

  while (r != NULL)
  {
    if (r->data % 2 == 0)
    {
      suma = suma + r->data;
    }

    r = r->next;
  }

  return suma;
}

int LinkedList::SumarImpares()
{
  int suma = 0;
  node *r = inicio;

  while (r != NULL)
  {
    if (r->data % 2 != 0)
    {
      suma = suma + r->data;
    }

    r = r->next;
  }

  return suma;
}

int LinkedList::mayor()
{
  node *r = inicio;
  int n = 0;

  while (r != NULL)
  {
    if (n < r->data)
    {
      n = r->data;
    }

    r = r->next;
  }

  return n;
}

int LinkedList::menor()
{
  node *r = inicio;
  int n = r->data;

  while (r != NULL)
  {
    if (n > r->data)
    {
      n = r->data;
    }

    r = r->next;
  }
  return n;
}

void LinkedList::listaRep()
{

  LinkedList r;

  node *a = inicio;

  while (a != NULL)
  {
    int prueba = 0;
    node *b = a;

    while (b->next != NULL)
    {
      if (a->data == b->data)
      {
        prueba++;

        if (prueba >= 2)
        {
          r.addnode(a->data);
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
  node *indicador = inicio;
  int cuenta = 0;

  while (indicador != NULL)
  {
    int contador = cuenta;
    node *eliminador = indicador->next;

    while (eliminador != NULL)
    { 
      contador = contador + 1;

      if (indicador->data == eliminador->data)
      {
        eliminar(contador);
        contador--;
      }

      eliminador = eliminador->next;
    }

    indicador = indicador->next;
    cuenta = cuenta + 1;
  }
}

void LinkedList::ordenarDecreciente(){
  node *p = inicio;
  node *q = inicio->next;

  if(q == NULL){
    cout << "Lista vacía" << endl;
  }else{
    
    while(p != NULL)
    {
      while(q != NULL)
      {
        if(q ->data > p->data)
        {
          int temp = 0;

          temp = p ->data;
          p -> data = q ->data;
          q -> data = temp;
        }
        q = q->next;
      }
    p = p->next;  

    }

  }

}

void LinkedList::invertirLista(){

}
