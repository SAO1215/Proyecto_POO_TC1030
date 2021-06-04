/* 
 * 
 * Programacion Orientada a Objetos (TC1030.1)
 * Proyecto Bioma seresvivos
 * Olivia Araceli Morales Quezada
 * A01707371
 *
 * Esta clase define objeto de tipo Clima contiene las clases heredadas 
 * Flora y Fauna.
 *
 */

#ifndef SERESVIVOS_H_
#define SERESVIVOS_H_

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

//Declaracion de clase SeresVivos que es abstracta, es la clase madre de Flora y Fauna
class SeresVivos {

  //Mis variables comunes que voy a heredar, por eso se usa protected
    protected:
        string nombre;
        string tipo;
        string status;

    //Constructores y metodos publicos
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

/**
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @param string nom, tip, stat: nombre, tipo, status del ser vivo
 * @return
*/
SeresVivos::SeresVivos(string nom, string tip, string stat){
	nombre = nom;
	tipo = tip;
	status = stat;
}

/**
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @param string nom, tip: nombre, tipo del ser vivo
 * @return
*/
SeresVivos::SeresVivos(string nom, string tip){
	nombre = nom;
	tipo = tip;
}

//Los setters

/*
 * setter nombre
 *
 * @param string nombre
 * @return 
*/
void SeresVivos::setNombre(string nom){
	nombre = nom;
}

/*
 * setter tipo
 *
 * @param string tipo
 * @return 
*/
void SeresVivos::setTipo(string tip){
	tipo = tip;
}

/*
 * setter status
 *
 * @param string status
 * @return 
*/
void SeresVivos::setStatus(string stat){
	status = stat;
}

//Los getters

/**
 * getter nombre
 *
 * @param
 * @return string nombre
*/
string SeresVivos::getNombre(){
	return nombre;
}

/**
 * getter tipo
 *
 * @param
 * @return string tipo
*/
string SeresVivos::getTipo(){
	return tipo;
}

/**
 * getter status
 *
 * @param
 * @return string status
*/
string SeresVivos::getStatus(){
	return status;
}


//Funcion comun, sobreescrita
/**
 * resumen imprime los atributos de seresvivos
 *
 * imprime los datos de la clase seresvivos
 *
 * @param
 * @return
 */
void SeresVivos::resumen(){
	cout << "\nNombre: "<< nombre << endl;
	cout << "Tipo: "<< tipo << endl;
	cout << "Status: "<< status << endl;
}

//Clase Fauna que hereda de SeresVivos
class Fauna: public SeresVivos{

    //Variables privadas
    private:
        string alimentacion;
        string gestacion;
        double cantidad;
        double superficie;

    //Constructores y metodos
    public:
        Fauna(): SeresVivos("", "", "") {};
        Fauna(string nom, string tip, string stat, string ali, string gest, double cant, double super):SeresVivos(nom,tip,stat),
        alimentacion(ali),
        gestacion(gest),
        cantidad(cant),
        superficie(super) {};

        //Getters-Setters
        void setAlimentacion(string);
        string getAlimentacion();
        void setGestacion(string);
        string getGestacion();
        void setCantidad(double);
        double getCantidad();
        void setSuperficie(double);
        double getSuperficie();

        //Metodos
        double densidadPoblacion(){ return cantidad/superficie; } //Sobreescribe
        void resumen();
};

//Fauna Setters

/*
 * setter alimentacion
 *
 * @param string alimentacion
 * @return 
*/
void Fauna::setAlimentacion(string ali){
	alimentacion = ali;
}

/*
 * setter gestacion
 *
 * @param string gestacion
 * @return 
*/
void Fauna::setGestacion(string gest){
	gestacion = gest;
}

/*
 * setter cantidad
 *
 * @param string cantidad
 * @return 
*/
void Fauna::setCantidad(double cant){
	cantidad = cant;
}

/*
 * setter superficie
 *
 * @param string superficie
 * @return 
*/
void Fauna::setSuperficie(double super){
	superficie = super;
}

//Fauna Getters

/**
 * getter alimentacion
 *
 * @param
 * @return string alimentacion
*/
string Fauna::getAlimentacion(){
	return alimentacion;
}

/**
 * getter gestacion
 *
 * @param
 * @return string gestacion
*/
string Fauna::getGestacion(){
	return gestacion;
}

/**
 * getter cantidad
 *
 * @param
 * @return double cantidad
*/
double Fauna::getCantidad(){
	return cantidad;
}

/**
 * getter superficie
 *
 * @param
 * @return double superficie
*/
double Fauna::getSuperficie(){
	return superficie;
}

//Metodo para imprimir el resumen de los datos

/**
 * resumen imprime los atributos de seresvivos-fauna
 *
 * imprime los datos de la clase seresvivos-fauna
 *
 * @param
 * @return
 */
void Fauna::resumen(){
  SeresVivos::resumen(); //Funcion comun llamada desde seresvivos
  cout << "Alimentacion: "<< alimentacion << endl;
  cout << "Gestacion: "<< gestacion << endl;
  cout << "La densidad de poblacion es: "<< densidadPoblacion() << endl;
}

//Clase Flora que hereda de SeresVivos
class Flora: public SeresVivos{

    //Variables privadas
    private:
        double plantacion;
        double separacion;
        double terreno;

    //Constructores y metodos
    public:
        Flora(): SeresVivos("", "", "") {};
        Flora(string nom, string tip, string stat, double plant, double sep, double terr):SeresVivos(nom,tip,stat),
        plantacion(plant),
        separacion(sep),
        terreno(terr){};

        //G & S
        void setPlantacion(double);
        double getPlantacion();
        void setSeparacion(double);
        double getSeparacion();
        void setTerreno(double);
        double getTerreno();

        //Metodos
        double densidadPoblacion(){ return terreno / (plantacion * separacion); } //Sobreescribe
        void resumen();
};

//Flora Setters

/*
 * setter plantacion
 *
 * @param string plantacion
 * @return 
*/
void Flora::setPlantacion(double plant){
	plantacion = plant;
}

/*
 * setter separacion
 *
 * @param string separacion
 * @return 
*/
void Flora::setSeparacion(double sep){
	separacion = sep;
}

/*
 * setter terreno
 *
 * @param string terreno
 * @return 
*/
void Flora::setTerreno(double terr){
	terreno = terr;
}

//Flora Getters

/**
 * getter plantacion
 *
 * @param
 * @return double plantacion
*/
double Flora::getPlantacion(){
	return plantacion;
}

/**
 * getter separacion
 *
 * @param
 * @return double separacion
*/
double Flora::getSeparacion(){
	return separacion;
}

/**
 * getter terreno
 *
 * @param
 * @return double terreno
*/
double Flora::getTerreno(){
	return terreno;
}

/**
 * resumen imprime los atributos de seresvivos-fauna
 *
 * imprime los datos de la clase seresvivos-fauna
 *
 * @param
 * @return
 */
void Flora::resumen(){
  SeresVivos::resumen();
  cout << "La densidad de poblacion es: "<< densidadPoblacion() << endl;
}


#endif