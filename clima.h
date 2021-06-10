/* 
 * 
 * Programacion Orientada a Objetos (TC1030.1)
 * Proyecto Bioma clima
 * Olivia Araceli Morales Quezada
 * A01707371
 *
 * Esta clase define objeto de tipo Clima que es parte de Bioma, 
 * contiene sus atributos y los imprime.
 *
*/

#ifndef CLIMA_H_
#define CLIMA_H_

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

//Declaracion de clase Clima
class Clima {

  //Declaro variables privadas
  private:
      int temperatura;
      int presion;
      int humedad;
      float precipitacion;
      string clasificacion;

  //Declaro constructores y metodos publicos
  public:
      Clima();
      Clima(string clas, int temp, int pres, int hum, float prec);

      //Setters y getters
      void setTemperatura(int);
      int getTemperatura(); 
      void setPresion(int);
      int getPresion();
      void setHumedad(int);
      int getHumedad();
      void setPrecipitacion(float);
      float getPrecipitacion();
      void setClasificacion(string);
      string getClasificacion();

      //Metodo
      void mostrarClima();

};

//Costructores Clima

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Clima
 */
Clima::Clima() {
  clasificacion = " ";
	temperatura = 0;
	presion = 0;
  humedad = 0;
	precipitacion = 0;
}

/**
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @param string clas: clasificacion del bioma, int temp: temperatura del bioma, 
 *        int pres: presion del bioma, int humedad: humedad del bioma,
 *        int prec: precipitacion del bioma
 * @return Objeto Clima
*/
Clima::Clima(string clas, int temp, int pres, int hum, float prec){
	clasificacion = clas;
	temperatura = temp;
	presion = pres;
  humedad = hum;
	precipitacion = prec;
}

//Los setters

/*
 * setter temperatura
 *
 * @param int temperatura
 * @return 
*/
void Clima::setTemperatura(int temp){
	temperatura = temp;
}

/*
 * setter presion
 *
 * @param int presion
 * @return 
*/
void Clima::setPresion(int pres){
	presion = pres;
}

/*
 * setter humedad
 *
 * @param int humedad
 * @return 
*/
void Clima::setHumedad(int hum){
	humedad = hum;
}

/*
 * setter precipitacion
 *
 * @param int precipitacion
 * @return 
*/
void Clima::setPrecipitacion(float prec){
	precipitacion = prec;
}

/*
 * setter clasificacion
 *
 * @param string clasificacion
 * @return 
*/
void Clima::setClasificacion(string clas){
	clasificacion = clas;
}

//Los getters

/**
 * getter temperatura
 *
 * @param
 * @return int temperatura
*/
int Clima::getTemperatura(){ 
  return temperatura; 
}

/**
 * getter presion
 *
 * @param
 * @return int presion
*/
int Clima::getPresion(){ 
  return presion; 
}

/**
 * getter humedad
 *
 * @param
 * @return int humedad
*/
int Clima::getHumedad(){ 
  return humedad; 
}

/**
 * getter precipitacion
 *
 * @param
 * @return int precipitacion
*/
float Clima::getPrecipitacion(){ 
  return precipitacion; 
}

/**
 * getter clasificacion
 *
 * @param
 * @return string clasificacion
*/
string Clima::getClasificacion(){ 
  return clasificacion; 
}

//Funciones imprimir el clima

/**
 * mostrarClima imprime los atributos de Clima
 *
 * imprime los datos de la clase Clima
 *
 * @param
 * @return
 */
void Clima::mostrarClima(){
  cout << "Temperatura: "<< getTemperatura() << endl;
  cout << "Presion: "<< getPresion() << endl;
  cout << "Humedad: "<< getHumedad() << endl;
  cout << "Precipitacion: "<< getPrecipitacion() << endl;
  cout << "El pronóstico del dia de hoy es: "<< getClasificacion() << endl;
}



#endif