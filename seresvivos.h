/* Programacion Orientada a Objetos (TC1030.1)
 Proyecto 
 Olivia Araceli Morales Quezada
 A01707371
*/

#ifndef SERESVIVOS_H_
#define SERESVIVOS_H_

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

//La clase seres vivos es abstracta, es la clase madre de Flora y Fauna
class SeresVivos {
  //Mis variables comunes que voy a heredar, por eso se usa protected
    protected:
        
        string nombre;
        string tipo;
        string status;

    //Los metodos son de acceso publico
    public:
        SeresVivos(): nombre(""), tipo(""), status("") {}; //Constructor default
        SeresVivos(string nom, string tip, string stat); //Constructoer
        SeresVivos(string nom, string tip);

        //Setters y Getters
        void setNombre(string);
        string getNombre(); 
        void setTipo(string);
        string getTipo();
        void setStatus(string);
        string getStatus();

        //Metodos
        virtual double densidadPoblacion() = 0;//Sintaxis de
        virtual void resumen() = 0; //clase abstracta (virtuals)

};

//Costructores SeresVivos
SeresVivos::SeresVivos(string nom, string tip, string stat){
	nombre = nom;
	tipo = tip;
	status = stat;
}

SeresVivos::SeresVivos(string nom, string tip){
	nombre = nom;
	tipo = tip;
}

//Los setters
void SeresVivos::setNombre(string nom){
	nombre = nom;
}

void SeresVivos::setTipo(string tip){
	tipo = tip;
}

void SeresVivos::setStatus(string stat){
	status = stat;
}

//Los getters
string SeresVivos::getNombre(){
	return nombre;
}

string SeresVivos::getTipo(){
	return tipo;
}

string SeresVivos::getStatus(){
	return status;
}

//Funcion comun, esta se va usar en flora y fauna porque son los atributos que comparten
void SeresVivos::resumen(){
	cout << "\nNombre: "<< nombre << endl;
	cout << "Tipo: "<< tipo << endl;
	cout << "Status: "<< status << endl;
}

//Fauna que hereda de SeresVivos
class Fauna: public SeresVivos{

    private:
        string alimentacion;
        string gestacion;
        double cantidad;
        double superficie;

    public:
    //Constructores
        Fauna(): SeresVivos("", "", "") {};
        Fauna(string nom, string tip, string stat, string ali, string gest, double cant, double super):SeresVivos(nom,tip,stat){
          alimentacion = ali;
          gestacion = gest;
          cantidad = 0;
          superficie = 0;
        }

        Fauna(string nom, string tip, string ali, string gest):SeresVivos(nom,tip){
          alimentacion = ali;
          gestacion = gest;
          cantidad = 0;
          superficie = 0;
        }

        //Getters-Setters
        void setAlimentacion(string);
        string getAlimentacion();
        void setGestacion(string);
        string getGestacion();
        void setCantidad(double);
        double getCantidad();
        void setSuperficie(double);
        double getSuperficie();

        //Funciones
        double densidadPoblacion(){ return cantidad/superficie; } //Sobreescribe
        void resumen();
};

//Fauna Setters
void Fauna::setAlimentacion(string ali){
	alimentacion = ali;
}

void Fauna::setGestacion(string gest){
	gestacion = gest;
}

void Fauna::setCantidad(double cant){
	cantidad = cant;
}

void Fauna::setSuperficie(double super){
	superficie = super;
}

//Fauna Getters
string Fauna::getAlimentacion(){
	return alimentacion;
}

string Fauna::getGestacion(){
	return gestacion;
}

double Fauna::getCantidad(){
	return cantidad;
}

double Fauna::getSuperficie(){
	return superficie;
}

//Metodo para imprimir el resumen de los datos
void Fauna::resumen(){
  SeresVivos::resumen(); //Funcion comun llamada desde seresvivos
  cout << "Alimentacion: "<< alimentacion << endl;
  cout << "Gestacion: "<< gestacion << endl;
  cout << "La densidad de poblacion es: "<< densidadPoblacion() << endl;
}

//Clase Flora que hereda de SeresVivos
class Flora: public SeresVivos{

    private:
        double plantacion;
        double separacion;
        double terreno;

    public:
        Flora(): SeresVivos("", "", "") {};
        Flora(string nom, string tip, string stat, double plant, double sep, double terr):SeresVivos(nom,tip,stat){
          plantacion = 0;
          separacion = 0;
          terreno = 0;
        }

        Flora(string nom, string tip):SeresVivos(nom,tip){
          plantacion = 0;
          separacion = 0;
          terreno = 0;
        }
        //G & S
        void setPlantacion(double);
        double getPlantacion();
        void setSeparacion(double);
        double getSeparacion();
        void setTerreno(double);
        double getTerreno();

        //Funciones
        double densidadPoblacion(){ return terreno/(plantacion*separacion); } //Sobreescribe, es distinta de la otra
        void resumen();
};

//Flora Setters
void Flora::setPlantacion(double plant){
	plantacion = plant;
}

void Flora::setSeparacion(double sep){
	separacion = sep;
}

void Flora::setTerreno(double terr){
	terreno = terr;
}

//Flora Getters
double Flora::getPlantacion(){
	return plantacion;
}

double Flora::getSeparacion(){
	return separacion;
}

double Flora::getTerreno(){
	return terreno;
}

//Imprimir datos flora
void Flora::resumen(){
  SeresVivos::resumen();
  cout << "La densidad de poblacion es: "<< densidadPoblacion() << endl;
}


#endif