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

const int ESP = 1000; //El maximo cupo del arreglo

class Bioma {
    //Mis variables privadas
  private:
      SeresVivos *seres[ESP]; //Apuntador
      int numeroEsp;
      //string nombre;

  public:
      Bioma(): numeroEsp(0){}; //Costructor default

      void creaEjemplos();
      void muestraEjemplos();

      void registrarFlora(string nom, string tip, string stat, double plant, double sep, double terr);
      void registrarFauna(string nom, string tip, string stat, string ali, string gest, double cant, double super);
      //void descripcionEjemplar();
      //void mostrarClima();


};

//Ejemplos para rellenar
void Bioma::creaEjemplos() {

  //Flora(string nom, string tip, string stat, double plant, double sep, double terr)
  seres[numeroEsp] = new Flora("Elecho", "Hierba", "Muy comun",1.2,2.8,10000);
  numeroEsp++;
  seres[numeroEsp] = new Flora("Petunia", "Floral", "Peculiar",2.5,3.5,10000);
  numeroEsp++;

  //Fauna(string nom, string tip, string stat, string ali, string gest, double cant, double super)
  seres[numeroEsp] = new Fauna("Conejo", "Fauna", "Fuera de peligro", "Hervivoro", "Mamifero",9800,15000);
  numeroEsp++;
  seres[numeroEsp] = new Fauna("Zorro", "Fauna", "Endemico", "Carnívoro", "Mamifero",1000,15000);
  numeroEsp++;
}

//Imprimir los ejemplos que creamos recorriendo todo el arreglo
void Bioma::muestraEjemplos(){
	for(int i=0; i<numeroEsp ;i++)
    seres[i]->resumen();
}

//Funciones para añadir nuevos seres vivios de cada tipo
void Bioma::registrarFauna(string nom, string tip, string stat, string ali, string gest, double cant, double super){
  seres[numeroEsp] = new Fauna(nom, tip, stat, ali, gest, cant, super); //virtual + new + apuntadores = Poliformismo
  numeroEsp++;
}

void Bioma::registrarFlora(string nom, string tip, string stat, double plant, double sep, double terr){
  seres[numeroEsp] = new Flora(nom, tip, stat, plant, sep, terr); //virtual + new + apuntadores = Poliformismo
  numeroEsp++;
}

#endif