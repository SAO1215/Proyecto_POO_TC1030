/* Programacion Orientada a Objetos (TC1030.1)
 Proyecto 
 Olivia Araceli Morales Quezada
 A01707371
*/

#ifndef CLIMA_H_
#define CLIMA_H_

#include <iostream>
#include <sstream>
#include <string>

using namespace std;


class Clima {
  //Variables 
  private:
      int temperatura;
      int presion;
      int humedad;
      float precipitacion;
      string clasificacion;

  public:
  //Constructores
      //Clima(){};
      Clima(string clas, int temp, int pres, int hum, float prec);
      Clima(string clas, int temp);

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

        //Funciones
        void mostrarClima();

};

//Costructores Clima
Clima::Clima(string clas, int temp, int pres, int hum, float prec){
	clasificacion = clas;
	temperatura = temp;
	presion = pres;
  humedad = hum;
	precipitacion = prec;
}

Clima::Clima(string clas, int temp){
	clasificacion = clas;
	temperatura = temp;
}

//Los setters
void Clima::setTemperatura(int temp){
	temperatura = temp;
}

void Clima::setPresion(int pres){
	presion = pres;
}

void Clima::setHumedad(int hum){
	humedad = hum;
}

void Clima::setPrecipitacion(float prec){
	precipitacion = prec;
}

void Clima::setClasificacion(string clas){
	clasificacion = clas;
}

//Los getters
int Clima::getTemperatura(){ 
  return temperatura; 
}

int Clima::getPresion(){ 
  return presion; 
}

int Clima::getHumedad(){ 
  return humedad; 
}

float Clima::getPrecipitacion(){ 
  return precipitacion; 
}

string Clima::getClasificacion(){ 
  return clasificacion; 
}

//Funciones imprimir el clima
void Clima::mostrarClima(){
  cout << "\nCaracterísticas del clima en el bioma"<< endl;
  cout << "Temperatura: "<< temperatura << endl;
  cout << "Presion: "<< presion << endl;
  cout << "Humedad: "<< humedad << endl;
  cout << "Precipitacion: "<< precipitacion << endl;
  cout << "El pronóstico del dia de hoy es: "<< clasificacion << endl;
}

#endif