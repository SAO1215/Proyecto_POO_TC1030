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

      //Setters
        void setTemperatura(int);
        void setPresion(int);
        void setHumedad(int);
        void setPrecipitacion(float);
        void setClasificacion(string);


      //Getters
      int getTemperatura() { return temperatura; }
      int getPresion() { return presion; }
      int getHumedad() { return humedad; }
      float getPrecipitacion() { return precipitacion; }
      string getClasificacion() { return clasificacion; }

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



#endif