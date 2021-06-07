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

      void menuBioma();
      void creaEjemplos();
      void registrarFlora();
      void registrarFauna();
      void muestraEjemplares();
      void muestraClima();
};

//Constructores

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Bioma
 */
Bioma::Bioma() {
  Clima c("", 0, 0, 0, 0);
  clima = c;
  numeroEsp = 0;
}

/**
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @param Clima clim: objeto
 * @return Objeto Bioma
*/
Bioma::Bioma(Clima clim) {
  clima = clim;
  numeroEsp = 0; 
}

/*
 * setter clima
 *
 * @param Clima clima
 * @return 
*/
void Bioma::setClima(Clima c) {
  clima = c;
}

/**
 * getter clima
 *
 * @param
 * @return Clima clima
*/
Clima Bioma::getClima(){
  return clima;
} 

//Metodos

void Bioma::menuBioma() {
	cout<<"\n **** BIENVENIDO A TU-BIOMA ****\n";
  cout<<"__________Menu Principal__________\n\n";
  cout<<"1. Registra tus especies\n";
	cout<<"2. Descripción del Bioma\n";
	cout<<"3. Salida\n";
	cout<<"\nIngrese una de las opciones validas: ";
}

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
  seres[numeroEsp] = new Flora("Elecho", "Hierba", "Comun",1.2,2.8,10000);
  numeroEsp++;
  seres[numeroEsp] = new Flora("Petunia", "Floral", "Peculiar",2.5,3.5,10000);
  numeroEsp++;

  //Fauna(string nom, string tip, string stat, string ali, string gest, double cant, double super)
  seres[numeroEsp] = new Fauna("Conejo", "Fauna", "Peligro", "Hervivoro", "Mamifero",9800,10);
  numeroEsp++;
  seres[numeroEsp] = new Fauna("Zorro", "Fauna", "Endemico", "Carnívoro", "Mamifero",10000,15);
  numeroEsp++;
}

//Funciones para añadir nuevos seres vivios de cada tipo

/**
 * registrarFauna crea un objeto Fauna y lo agrega al
 * arreglo de seresvivos
 *
 * pide valores necesarios para crear un objeto Fauna y lo agrega al 
 * arreglo de seresvivos usando como indice el número de especies.
 *
 * @param string nom, string tip, string stat, string ali, string gest, 
 *      double cant, double super.
 * @return
 */
void Bioma::registrarFauna(){

  string nom, tip, stat, ali, gest;
  double cant, super;

  cout<<"\nNombre de la especie: ";
  cin>>nom;
  cout<<"Tipo [Flora/Fauna]: ";
  cin>>tip;
  cout<<"Status [Endemico/Comun/Peligro...]: ";
  cin>>stat;
  cout<<"Tipo de alimentacion [carnivora/hervivora/omnivora]: ";
  cin>>ali;
  cout<<"Tipo de gestacion [mamifera/ovipara]: ";
  cin>>gest;
  cout<<"Cantidad encontrada: ";
  cin>>cant;
  cout<<"Area de la superficie de estudio [kilometros^2]: ";
  cin>>super;

  seres[numeroEsp] = new Fauna(nom, tip, stat, ali, gest, cant, super); //virtual + new + apuntadores = Poliformismo
  numeroEsp++;
}

/**
 * registrarFlora crea un objeto Flora y lo agrega al
 * arreglo de seresvivos
 *
 * pide valores necesarios para crear un objeto Flora y lo agrega al 
 * arreglo de seresvivos usando como indice el número de especies.
 *
 * @param string nom, string tip, string stat, double plant, double sep, double terr.
 * @return
 */
void Bioma::registrarFlora(){

  string nom, tip, stat;
  double plant, sep, terr;

  cout<<"\nNombre de la especie: ";
  cin>>nom;
  cout<<"Tipo [Flora/Fauna]: ";
  cin>>tip;
  cout<<"Status [Endemico/Comun/Peligro...]: ";
  cin>>stat;
  cout<<"Marco de plantacion [metros]: ";
  cin>>plant;
  cout<<"Separacion de las cepas [metros]: ";
  cin>>sep;
  cout<<"Area del terreno del estudio [metros^2]: ";
  cin>>terr;

  seres[numeroEsp] = new Flora(nom, tip, stat, plant, sep, terr); //virtual + new + apuntadores = Poliformismo
  numeroEsp++;
}

/**
 * muestraEjemplares imprime los ejemplares creados
 *
 * utiliza el arreglo seres[] y el número de especies, para recorrer todo el
 * arreglo imprimiendo cada uno de los objetos con su método resumen().
 *
 * @param
 * @return
 */
void Bioma::muestraEjemplares(){
	for(int i=0; i<numeroEsp ;i++)
    seres[i]->resumen();
}

/**
 * muestraClima imprime los atributos de Clima
 *
 * imprime los datos de la clase Clima
 *
 * @param
 * @return
 */
void Bioma::muestraClima() {
  cout << "El clima del bioma tiene las siguientes características:" << endl;
  clima.mostrarClima();
}



#endif