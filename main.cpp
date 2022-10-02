#include <iostream>   //outputs mas faciles
#include "LinkedList.hpp"
#include "node.hpp"
#include <stdlib.h> //System processes

using namespace std;  //imports no usar espacio

void Clear()
{
  system("cls");
}

void Esperar(){
  cout << "Presione cualquier tecla para continuar"<< endl;
  system("pause");
}

void MostrarMenu(){

  cout << " -----------------------------------------------------------------" << endl;
  cout << "1.  Insertar elemento" << endl;
  cout << "2.  Mostrar elementos" << endl;
  cout << "3.  Buscar dato (Retorna posición)" << endl;
  cout << "4.  Buscar dato (Retorna dato)" << endl;
  cout << "5.  Eliminar elemento" << endl;
  cout << "6.  Calcular suma promedio de números pares" << endl;
  cout << "7.  Calcular suma promedio de números impares" << endl;
  cout << "8.  Calcular número menor" << endl;
  cout << "9.  Calcular numero mayor" << endl;
  cout << "10. Mostrar elementos repetidos" << endl;
  cout << "11. Eliminar elementos repetidos" << endl;
  cout << "12. Ordenar la lista de forma decreciente" << endl;
  cout << "13. Invertir la lista" << endl;
  cout << "14. Salir" << endl;
  cout << " -----------------------------------------------------------------" << endl;
  
  
}

int main(){
  int choice, dato;
  LinkedList a;

  do{
    MostrarMenu();
    cout << "Ingresa el número de la opción que quieras elegir ";
    cin >> choice;

    if(choice != 1 && !(choice <=14))
    {
      //MostrarMenu();
      //cin >> choice;
      system("ejecutable.exe");
    }
    switch (choice)
    {
    case 1:
      Clear();
      cout << "Ingrese el dato ";
      cin >> dato; 
      a.addnode(dato);
      Esperar();
      Clear();
      break;
    
    case 2: 
      Clear();
      a.read();
      Esperar();
      Clear();
      break;

    case 3:
      Clear();
      cout << "Ingrese el dato a buscar ";
      cin >> dato;
      a.buscar(dato);
      Esperar();
      break;
    
    case 4:
      Clear();
      cout << "Ingrese el dato a buscar ";
      cin >> dato;
      a.retornar(dato);
      Esperar();
      break;

    case 5:
      Clear();
      cout << "Ingrese el dato a eliminar ";
      cin >> dato;
      a.eliminar(dato);
      Esperar();
      break;

    case 6:
      Clear();
      a.Sumarpares();
      Esperar();
      break;

    case 7:
      Clear();
      a.SumarImpares();
      Esperar();
      break;
    
    case 8:
      Clear();
      a.menor();
      Esperar();
      break;
    
    case 9:
      Clear();
      a.mayor();
      Esperar();
      break;
    
    case 10:
      Clear();
      a.listaRep();
      Esperar();
      Clear();
      break;
    case 11:
      Clear();
      a.eliminarRep();
      Esperar();
      break;

    case 12:
      Clear();
      a.ordenarDecreciente();
      Esperar();
      Clear();
      break;

    case 13:
      Clear();
      a.invertirLista();
      Esperar();
      Clear();
      break;
    
    case 14:
      cout << "Gracias por usar nuestro sistema. Merecemos un 5 :)";
      return 0;
    
    default:
      cout << "Dígite un número entre el rango" << endl;
      break;
    
    }
    
    

  }while(choice > 0 && choice < 15);

  return 0;
}