#include <iostream>   //outputs mas faciles
#include "LinkedList.hpp"
#include "node.hpp"

using namespace std;  //imports no usar espacio

int main(){
  int choice;
  LinkedList a;

  do{
    cout << "1. Insertar elemento" << endl;
    cout << "2. Mostrar elementos" << endl;
    cout << "3. Buscar dato (Retorna posición)" << endl;
    cout << "4. Buscar dato (Retorna dato)" << endl;
    cout << "5. Eliminar elemento" << endl;
    cout << "6. Calcular suma promedio de números pares" << endl;
    cout << "7. Calcular suma promedio de números impares" << endl;
    cout << "8. Calcular número menor" << endl;
    cout << "9. Calcular numero mayour" << endl;
    cout << "10. Mostrar elementos repetidos" << endl;
    cout << "11. Eliminar elementos repetidos" << endl;
    cout << "12. Ordenar la lista de forma decreciente" << endl;
    cout << "13. Invertir la lista" << endl;
    cout << "14. Salir" << endl;

    cout << "Ingresa el número de la opción que quieras elegir ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      int dato;
      cout << "Ingrese el dato ";
      cin >> dato; 
      a.addnode(dato);
      break;
    
    case 2: 
      a.read();
      break;

    case 3:
      int dato;
      cout << "Ingrese el dato a buscar";
      cin >> dato;
      a.buscar(dato);
      break;
    
    case 4:
      cout << "Ingrese el dato a buscar";
      cin >> dato;
      a.retornar(dato);
      break;

    case 5:
      cout << "Ingrese el dato a eliminar";
      cin >> dato;
      a.eliminar(dato);
      break;

    case 6:
      a.Sumarpares();
      break;

    case 7:
      a.SumarImpares();
      break;
    
    case 8:
      a.menor();
      break;
    
    case 9:
      a.mayor();
      break;
    
    case 10:
      a.listaRep();
      break;
    case 11:
      a.eliminarRep();
      break;

    case 12:
      a.ordenarDecreciente();
      break;

    case 13:
      a.invertirLista();
      break;
    
    case 14:
    //Exit
    
    default:
      break;
    }



  }while(choice >0 && choice < 13);


  
  a.addnode(1);
  a.addnode(1);
  a.addnode(1);
  a.addnode(1);
  a.addnode(1);
  a.addnode(5);
  a.read();
  a.eliminarRep();
  a.SumarImpares();
  a.Sumarpares();
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