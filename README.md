# Goyeneche-POO
Calculadora de Ecuaciones


***************SUBCOMPETENCIAS A REVISAR***************

Compruebo el acceso a los atributos y métodos de la clase (encapsulamiento correcto, mando a llamar los objetos de forma útil).
Avance 1 (PRivate y publics y relaciones entre clases)
 	
Codifico métodos y atributos de clase correctamente. (constructores, getters, setters)
Avance 1 (Hay varios Getters y Setters)
  	
Diseño clases sencillas completas (con todos los atributos y métodos requeridos).
Avance 2 (Muchas clases con atributos privador y metodos)
 
Utilizo el concepto de herencia en el diagrama de clases de manera adecuada.
Avance 2 (LAS CLASES DE SUMA, RESTA, MULTIPLICACION Y DIVISION CON OPERACIONESMATEMATICAS ESTA CON LA FLECHA BLANCA REPRESENTANDO LA HERENCIA)
 	
Implemento las clases en c++ siguiendo el diseño del diagrama de clases en UML.
Avance 3 (CalculadoraUML)
 	
Utilizo el concepto de composición (o agreagación) en el diagrama de clases.
Avance 3 (Composicion/ Agregacion entre Memoria y OperacionMatematica)
 	
Implemento herencia de manera correcta y util
Avance 3 (LAS CLASES DE SUMA, RESTA, MULTIPLICACION Y DIVISION CON OPERACIONESMATEMATICAS)

Impemento composición (o agregación) sieguiendo mi diagrama de clases
Avance 3 (Composicion/ Agregacion entre Memoria y OperacionMatematica llevado al codigo)
 
Implemento clases apegadas a requerimientos a partir de un modelo.
Avance 3 (Hehco)
 	
Sigo estándares en todo mi código fuente: estilo, sangrías, comentarios, nombres, etc...
Avance 3 (Se siguen los estandares de codificacion de C++)
 	
Guardo correctamente los avances en commits durante la materia.
Avance 3 (El AVANCE 3 NO SE PORQUE NO NO SE ME CALIFICO SI EN CANVAS SI ESTA EN TIEMPO)

*******************CLASES*******************

OperacionMatematica Class:
Descripción: Esta es una clase base abstracta que representa una operación matemática básica. Contiene los operandos a y b y el resultado de la operación.
Relación con la POO: Utiliza la herencia y la polimorfia a través de funciones virtuales puras para permitir que las clases derivadas implementen su propia lógica de operación.

Memoria Class:
Descripción: Representa una memoria que almacena un historial de operaciones matemáticas realizadas. También mantiene el resultado anterior y proporciona métodos para agregar operaciones y mostrar el historial.
Relación con la POO: Utiliza una composición al contener un vector de punteros a objetos de la clase OperacionMatematica.

Operaciones Matemáticas Derivadas (Suma, Resta, Multiplicacion, Division):
Descripción: Clases derivadas de OperacionMatematica que implementan operaciones matemáticas específicas (suma, resta, multiplicación, división).
Relación con la POO: Demuestran la herencia y la especialización, ya que cada clase hereda de OperacionMatematica y proporciona su propia implementación de la operación.

TasaDeCambio Class:
Descripción: Proporciona tasas de cambio entre diferentes monedas almacenadas en un mapa no ordenado.

ConversorMoneda Class:
Descripción: Utiliza la clase TasaDeCambio para realizar conversiones de moneda.
Relación con la POO: Demuestra la composición al tener un miembro de tipo TasaDeCambio.

InfoMoneda Class:
Descripción: Almacena información sobre diferentes monedas, como el país de origen y el valor.
Relación con la POO: Proporciona métodos para obtener información sobre monedas y demuestra la encapsulación de datos.

int Main:
Descripción: Contiene la lógica principal del programa. Permite al usuario realizar varias operaciones matemáticas, incluida la conversión de monedas, y muestra el historial de operaciones.

*****************CORRECCIONES*****************

1.- Enfoque de manera diferente el proyecto quitando la idea de resolver ecuaciones para enfocarlo a una manera en la que se de mas relaciones entre clases.
2.- Agregue la classe de memoria para mostrar el historial y almacenar resultados de la classe virtual operacionMAtemarica
3.- Agregue las clases para la conversion de valores para agreguar mas tipos de relaciones
