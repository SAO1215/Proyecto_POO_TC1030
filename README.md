# Proyecto_POO_TC1030 (Avance 2)

## Contexto

Los biomas están compuestos por factores abióticos (clima) y bióticos (animales y plantas), para poder mantener un control y registro de estos componentes de una forma practica, este proyecto usa una estructura de clases donde se representa un bioma en conjunto con su tipo de clima y los seres vivos de que lo habitan, clasificados en su flora y fauna. El programa permite obtener la descripción general del bioma, su estado del clima, registrar nuevas especies y obtener información relacionada con los ejemplares que lo habitan, así como el calculo de la densidad de su población.

## Avance 1
### Diseño UML

El diagrama de clases contiene 5 clases, la clase principal es Bioma qué cuenta sus atributos y métodos en los cuales permite registrar nuevos ejemplares y mostrar su descripción; a esta clase Bioma la componen otras dos clases: Clima y SeresVivos, estos dos son tan complejos que contienen objetos propios. La clase Clima cuenta con sus atributos y métodos con el que obtenemos un estado completo del tiempo. La clase SeresVivos es la clase madre de otras dos: Flora y Fauna, se divide de esta manera ya que cada una tiene atributos y métodos que funcionan de forma diferente, pero aún así heredan y comparten algunos atributos. 

## Avance 2
### Herencia 

En este avance se basa en implementar la parte de herencia, esta consistío en crear la clase SeresVivos como abstracta, es de esta forma porque no es nuestra intencion hacer objetos "SeresVivos" directamente, sino que de esta clase hay tipos a los que heredamos sus características comunes con las que ya podemos generar clases hijas que usaremos como molde para crear objetos del tipo "Flora" o "Fauna", estos cuentan con sus propios metodos y atributos, pero tambien sobreescriben alos de su clase madre. En el main ya se incluyen algunos objetos como ejemplo. Se actualizo el UML.
Algunas consideraciones en este avance es que aun no se implementan las composiciones de "Clima" y "SeresVivos" a "Bioma", el avance se centra en la herencia y faltan integrar intrucciones o un menu.

## Avance 3
### Polimorfismo 

El avance tres hace uso de apuntadores, funciones virtual y el operador new para implementar polimorfismo en el código, desde Bioma a través de la clase definida como abstracta SeresVivos se pueden hacer uso de los tipos Flora y Fauna para añadir e imprimir nuevos ejemplares de cada clase con sus funciones propias. El programa imprime los seres vivos de ejemplo además de dos añadidos en el main uno de cada tipo, junto con la descripción del clima que no existia en la version anterior. 
Consideraciones para el Avance 3: Al correr el programa se genera un archivo main inesperado. En esta versión del programa no muestra de forma correcta la densidad de población, en su lugar pone “-nan”, para solucionarlo hay que cambiarlo a un string. Hubo cambios menores que no se actualizaron en el UML. 
