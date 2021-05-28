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

  //Crear bioma
  Bioma bioma;
  //Rellenar el arreglo seresvivos[]
  bioma.creaEjemplos();
  //Imprimir los emeplos
  bioma.muestraEjemplos();

  //Añadir otro ser vivo de cada clase
  bioma.registrarFauna("Mapache", "Fauna", "En peligro", "Omnivoros", "Mamifera", 3000, 17000);
  bioma.registrarFlora("Rosal", "Flora", "Comun", 3.7, 4.2, 5000);

  //Imprimr de otra vez con los nuevos elementos
  bioma.muestraEjemplos();

  //Crear clima e imprimirlo
  Clima clima("Despejado", 66, 1025, 55, 0);
  clima.mostrarClima();


  return 0;
}
