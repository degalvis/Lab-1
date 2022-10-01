#include <iostream>   //outputs mas faciles
#include "node.hpp"   
using namespace std;  //imports no usar espacio

node::node(){
  data = 0;
  next = NULL;}

node::node(int data){
  data = data;
  next = NULL;}

