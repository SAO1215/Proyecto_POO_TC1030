/* 
 * 
 * Programacion Orientada a Objetos (TC1030.1)
 * Proyecto Bioma main
 * Olivia Araceli Morales Quezada
 * A01707371
 *
 * Este es un proyecto para la clase TC1030 Programación Orientado a
 * Objetos. Es un programa que permite captuar seres vivos de tipo Flora 
 * y Fauna, junto con las características de cada especie; nos permite calcular
 * y llevar registro de la densidad de población dentro del bioma. 
 * 
 *
*/

#include <iostream>
#include <sstream>
#include <string>
#include "bioma.h"


using namespace std;


int main(){
  //Primero debemos crear el clima dentro de nuestro bioma
  Clima desp("Despejado", 66, 1025, 55, 0);
  Bioma bio(desp);
  bio.muestraClima();

  //Crear bioma
  Bioma bioma;
  //Rellenar el arreglo seresvivos[]
  bioma.creaEjemplos();
  //Imprimir los emeplos
  bioma.muestraEjemplos();

  //Añadir otro ser vivo de cada clase
  bioma.registrarFauna("Mapache", "Fauna", "En peligro", "Omnivoros", "Mamifera", 3000, 17);
  bioma.registrarFlora("Rosal", "Flora", "Comun", 3.7, 4.2, 5000);

  //Imprimir otra vez con los nuevos elementos
  bioma.muestraEjemplos();


  return 0;
}