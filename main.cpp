/* Programacion Orientada a Objetos (TC1030.1)
 Proyecto 
 Olivia Araceli Morales Quezada
 A01707371
*/

#include <iostream>
#include "bioma.h"
#include "clima.h"
#include "seresvivos.h"

using namespace std;


int main(){

  cout<<"Primer especie floral"<<endl;
  //Crear un objeto tipo flora e imprimir caracteristicas uno a uno
	Flora rosa("Rosal", "Floral", "Comun");
  cout<< rosa.getNombre()<<endl;
  cout<< rosa.getTipo()<<endl;
  cout<< rosa.getStatus()<<endl;

  cout<<"Segunda especie floral"<<endl;
  //Crear otro objeto y que se imprima el resumen junto
  Flora sauce("Sauce Lloron", "Plantae", "Raro");

	sauce.resumen(); //Sobreescritura
  
  cout<<"Primer especie de fauna"<<endl;
  //Crear objeto fauna e imprimir resumen
  Fauna conejo("Conejo", "Fauna", "Fuera de peligo", "Hervivora", "Mamifera");

  conejo.resumen();
  
  //Crear clima
  Clima ("Despejado", 66, 1025, 55, 0);

}