/* 
 * 
 * Programacion Orientada a Objetos (TC1030.1)
 * Proyecto Bioma bioma
 * Olivia Araceli Morales Quezada
 * A01707371
 *
 * Esta clase define objeto de tipo Bioma que contiene todas las operaciones
 * para registrar SeresVivos y establecer un Clima, esta clase es utilizada 
 * por la función principal del programa.
 *
 *
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

  //Declaro la variables privadas de instancia
  private:

      SeresVivos *seres[ESP]; //Apuntador
      int numeroEsp;
      Clima clima; //Composicion de Clima

  //Declaro constructores y metodos públicos.
  public:

      Bioma();
      Bioma(int);
      Bioma(Clima);
      
      void setClima(Clima);
      Clima getClima();
      void muestraClima();

      void creaEjemplos();
      void muestraEjemplos();
      void registrarFlora(string nom, string tip, string stat, double plant, double sep, double terr);
      void registrarFauna(string nom, string tip, string stat, string ali, string gest, double cant, double super);

};

//Constructor default
Bioma::Bioma() {
  Clima c("", 0, 0, 0, 0);
  clima = c;

}

//Constructor para clima
Bioma::Bioma(Clima clim) {
  clima = clim;
}

//Set para clima
void Bioma::setClima(Clima c) {
  clima = c;
}

//Get para clima
Clima Bioma::getClima(){
  return clima;
} 

//Metodo clima
void Bioma::muestraClima() {
  cout << "CLIMA" << endl;
  clima.mostrarClima();
}

//Metodos de ejemplos

/**
 * creaEjemplos genera objetos en SeresVivos[]
 *
 * genera objetos de tipo Flora y Fauna y los guarda en la
 * varibale de instancia en seres[] (arreglo de seresvivos)
 * para rellenar. 
 *
 * @param
 * @return
 */
void Bioma::creaEjemplos() {

  //Flora(string nom, string tip, string stat, double plant, double sep, double terr)
  seres[numeroEsp] = new Flora("Elecho", "Hierba", "Muy comun",1.2,2.8,10000);
  numeroEsp++;
  seres[numeroEsp] = new Flora("Petunia", "Floral", "Peculiar",2.5,3.5,10000);
  numeroEsp++;

  //Fauna(string nom, string tip, string stat, string ali, string gest, double cant, double super)
  seres[numeroEsp] = new Fauna("Conejo", "Fauna", "Fuera de peligro", "Hervivoro", "Mamifero",9800,10);
  numeroEsp++;
  seres[numeroEsp] = new Fauna("Zorro", "Fauna", "Endemico", "Carnívoro", "Mamifero",10000,15);
  numeroEsp++;
}


/**
 * muestraEjemplos imprime los ejemplos de relleno
 *
 * utiliza el arreglo seres[] y el número de especies, para recorrer todo el
 * arreglo imprimiendo cada uno de los objetos con su método resumen().
 *
 * @param
 * @return
 */
void Bioma::muestraEjemplos(){
	for(int i=0; i<numeroEsp ;i++)
    seres[i]->resumen();
}


//Funciones para añadir nuevos seres vivios de cada tipo

/**
 * registrarFauna crea un objeto Fauna y lo agrega al
 * arreglo de seresvivos
 *
 * crea un objeto Fauna y lo agrega a arreglo de seresvivos usando como
 * indice el número de especies, el cuál incrementa en 1.
 *
 * @param string nom, string tip, string stat, string ali, string gest, 
 *      double cant, double super.
 * @return
 */
void Bioma::registrarFauna(string nom, string tip, string stat, string ali, string gest, double cant, double super){
  seres[numeroEsp] = new Fauna(nom, tip, stat, ali, gest, cant, super); //virtual + new + apuntadores = Poliformismo
  numeroEsp++;
}

/**
 * registrarFlora crea un objeto Flora y lo agrega al
 * arreglo de seresvivos
 *
 * crea un objeto Flora y lo agrega a arreglo de seresvivos usando como
 * indice el número de especies, el cuál incrementa en 1.
 *
 * @param string nom, string tip, string stat, double plant, double sep, double terr.
 * @return
 */
void Bioma::registrarFlora(string nom, string tip, string stat, double plant, double sep, double terr){
  seres[numeroEsp] = new Flora(nom, tip, stat, plant, sep, terr); //virtual + new + apuntadores = Poliformismo
  numeroEsp++;
}



#endif