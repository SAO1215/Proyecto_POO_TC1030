/* Programacion Orientada a Objetos (TC1030.1)
 Proyecto 
 Olivia Araceli Morales Quezada
 A01707371
*/

#ifndef BIOMA_H_
#define BIOMA_H_

#include <iostream>
#include <sstream>
#include <string>
#include "clima.h"
#include "seresvivos.h"

using namespace std;

class Bioma {
    //Mis variables privadas
  private:
      //SeresVivos[]
      string nombre;

  public:
      Bioma(): nombre(""){}; //Costructor default

      void registrarFlora();
      void registrarFauna();
      int mostrarEjemplares();
      void descripcionEjemplar();
      void mostrarClima();
};


#endif