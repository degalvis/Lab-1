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
  cout << "3.  Buscar dato (Retorna posicion)" << endl;
  cout << "4.  Buscar dato (Retorna dato)" << endl;
  cout << "5.  Eliminar elemento" << endl;
  cout << "6.  Calcular suma promedio de numeros pares" << endl;
  cout << "7.  Calcular suma promedio de numeros impares" << endl;
  cout << "8.  Calcular numero menor" << endl;
  cout << "9.  Calcular numero mayor" << endl;
  cout << "10. Mostrar elementos repetidos" << endl;
  cout << "11. Eliminar elementos repetidos" << endl;
  cout << "12. Ordenar la lista de forma decreciente" << endl;
  cout << "13. Invertir la lista" << endl;
  cout << "14. Salir" << endl;
  cout << " -----------------------------------------------------------------" << endl;

}

int main(){
  int choice, dato, cantNodes;
  LinkedList a;

  do{
    MostrarMenu();
    cout << "Ingresa el numero de la opción que quieras elegir ";
    cin >> choice;

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
      cout << "Ingrese el dato a buscar por posicion ";
      cin >> dato;
      int en;
      en = a.buscar(dato);
      cout << "El dato buscado esta: " << en << endl; 
      Esperar();
      Clear();
      break;
    
    case 4:
      Clear();
      cout << "Ingrese el dato a buscar ";
      cin >> dato;
      cout<<"El dato buscado esta en: "<< a.retornar(dato) <<endl;
      Esperar();
      Clear();
      break;

    case 5:
      Clear();
      cout << "Ingrese el dato a eliminar ";
      cin >> dato;
      a.eliminar(dato);
      Esperar();
      Clear();
      break;

    case 6:
      Clear();
      a.Sumarpares();
      cout << "La suma de los numeros pares en la lista es: " << a.Sumarpares() << endl;
      Esperar();
      Clear();
      break;

    case 7:
      Clear();
      cout << "La suma de los numeros impares en la lista es: " << a.SumarImpares() << endl;
      Esperar();
      Clear();
      break;
    
    case 8:
      Clear();
      cout << "El numero mayor es: " << a.menor() << endl;
      Esperar();
      Clear();
      break;
    
    case 9:
      Clear();
      cout << "El numero mayor es: " << a.mayor() << endl;
      Esperar();
      Clear();
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
      Clear();
      break;

    case 12:
      Clear();
      cout << "La lista actual es: " << endl;
      a.read();
      cantNodes = a.countNodes(a);
      cout<<"Ahora es así:"<<endl;
      a.ordenarDecreciente(cantNodes);
      a.read();
      Esperar();
      Clear();
      break;

    case 13:
      Clear();
      cout<<"La lista actual es:" << endl;
      a.read();
      cout<<"Ahora es así:"<<endl;
      cantNodes = a.countNodes(a);
      a.invertirLista(cantNodes);
      a.read();
      Esperar();
      Clear();
      break;
    
    case 14:
      cout << "Gracias por usar nuestro sistema. Merecemos un 5 :)";
      return 0;
    
    default:
      cout << "Digite un numero entre el rango" << endl;
      break;
    
    }
    
  }while(choice > 0 && choice < 15);

  return 0;
}