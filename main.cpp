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

  //Variables para seleccionar opciones
  int op1, op2;

  //Primero debemos crear un clima dentro de nuestro bioma
  Clima desp("Despejado", 66, 1025, 55, 0);
  //Creamos objeto Bioma
  Bioma bio(desp);
  //Rellenamos con ejemplos
  bio.creaEjemplos();



  do
  {
    bio.menuBioma();
    cin>>op1;

    switch(op1)
    {
      case 1: 
			cout<<"\n***Registra una nueva especie***\n\n";
			cout<<"1. Nueva especie tipo FLORA\n";
			cout<<"2. Nueva especie tipo FAUNA\n";
			cout<<"3. Regresa al inicio\n";
			cout<<"\nSeleccione una opcion: ";
			cin>>op2;

       switch(op2)
       {
         case 1:
         cout<<"\n¡¡Genial!! Una especie nueva de flora\n";
         cout<<"(Recuerda rellenar los espacios correctamente)";
         bio.registrarFlora();
         break;

         case 2:
         cout<<"\n¡¡Genial!! Una especie nueva de fauna\n";
         cout<<"(Recuerda rellenar los espacios correctamente)";
         bio.registrarFauna();
         break;

         case 3:
         cout<<"\n\nRegresando al inicio...\n\n";
         break;
         
       }
      break;
      
      case 2:
      cout<<"\n***Descripcion del bioma***\n";
      cout<<"\n(Aquí puedes encontrar toda la información registrada)\n\n";
		  cout<<"1. Muestra los ejemplares\n";
      cout<<"2. Muestra las carateristicas del clima\n";
		  cout<<"3. Regresa al inicio\n";
		  cout<<"\nSeleccione una opcion: ";
		  cin>>op2;

       switch(op2)
       {
         case 1:
         cout<<"El Bioma esta integrado por la siguientes especies\n";
         bio.muestraEjemplares();
         break;

         case 2:
         cout<<"\nCLIMA\n";
         bio.muestraClima();
         break;

         case 3:
         cout<<"\n\nRegresando al inicio...\n\n";
         break;
       }
       break;

      case 3:
      cout<<"\n\n¡¡Nos vemos pronto!!\n\n";
      break;
    }
  }
  while (op1 != 3);

  return 0;
}