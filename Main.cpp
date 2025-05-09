#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cmath>
#define AMOUNT_ARRAY 100
#define NUM_FILAS 50
#define NUM_COLUMNAS
#define INTERVAL 32

int main() {

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 1;

	/*
	unsigned short juez1Nota;
	bool juez2 = false;
	bool juez3 = true;
	bool juez4 = true;

	std::cout << "Dame una nota!" << std::endl;
	std::cin >> juez1Nota;

	std::cout << std::endl << "La nota final es: " << juez1Nota*juez2*juez3*juez4 << std::endl;
	*/
	

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 2;

	/*
	unsigned short juez1Nota;
	bool juez2 = true;
	bool juez3 = true;
	bool juez4 = true;

	std::cout << "Dame una nota!" << std::endl;
	std::cin >> juez1Nota;

	std::cout << std::endl << "La nota final es: " << juez1Nota*(juez2+juez3+juez4) << std::endl;
	*/
	

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 3;

	/*
	unsigned int numero;
	unsigned int numero2;
	

	std::cout << "Dame un numero:" << std::endl;
	std::cin >> numero;

	std::cout << "Dame otro numero:" << std::endl;
	std::cin >> numero2;


	bool comparacionIguales = numero == numero2;


	std::cout << std::endl << "El resultado es: " << comparacionIguales*(numero+numero2) << std::endl;
	*/
	

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 4;

	/*
	unsigned int numero;
	unsigned int numero2;
	unsigned int numero3;


	std::cout << "Dame un numero:" << std::endl;
	std::cin >> numero;

	std::cout << "Dame otro numero:" << std::endl;
	std::cin >> numero2;

	std::cout << "Dame un ultimo numero:" << std::endl;
	std::cin >> numero3;


	bool comparacionMenorque = numero < numero2;
	bool comparacionMenoroigual = numero <= numero3;


	std::cout << std::endl << "El resultado es: " << comparacionMenorque * comparacionMenoroigual * (numero + numero2 + numero3) << std::endl;
	*/
	

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 5;

	/*
	unsigned int numero;
	unsigned int numero2;


	std::cout << "Dame un numero:" << std::endl;
	std::cin >> numero;

	std::cout << "Dame otro numero:" << std::endl;
	std::cin >> numero2;


	if (numero == 1 || numero2 == 1){
		std::cout << std::endl << "Uno de los numeros es 1" << std::endl;
	}
	*/
	

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 6;

	/*
	unsigned int numero;


	std::cout << "Dame un numero:" << std::endl;
	std::cin >> numero;


	if (numero >= 5) {
		std::cout << std::endl << "El numero es mayor o igual que 5" << std::endl;
	}
	else {
		std::cout << std::endl << "El numero es menor que 5" << std::endl;
	}
	*/
	

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 7;

	/*
	unsigned int numero;


	std::cout << "Dame un numero:" << std::endl;
	std::cin >> numero;


	if (numero == 7) {
		std::cout << std::endl << "El numero es 7" << std::endl;
	}
	else if (numero > 7) {
		std::cout << std::endl << "El numero es mayor que 7" << std::endl;
	}
	else {
		std::cout << std::endl << "El numero es menor que 7" << std::endl;
	}
	*/
	
	
#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 8;

	/*
	unsigned int dia;


	std::cout << "Dame un numero:" << std::endl;
	std::cin >> dia;

	switch (dia) {

	case 1: 
		std::cout << "Lunes";
		break;

	case 2:
		std::cout << "Martes";
		break;

	case 3:
		std::cout << "Miércoles";
		break;

	case 4:
		std::cout << "Jueves";
		break;

	case 5:
		std::cout << "Viernes";
		break;

	case 6:
		std::cout << "Sábado";
		break;

	case 7:
		std::cout << "Domingo";
		break;

	}
	*/
	

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 9;

	/*
	char letra;


	std::cout << "Dame una letra:" << std::endl;
	std::cin >> letra;

	switch (letra) {

	case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
		std::cout << "Es una vocal";
		break;

	default:
		std::cout << "Es una consonante" << std::endl;
		break;
	}
	*/
	

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 10;

	/*
	short numero, numero2, numeroFinal;


	std::cout << "Dame un numero:" << std::endl;
	std::cin >> numero;
	
	std::cout << "Dame otro numero:" << std::endl;
	std::cin >> numero2;


	numeroFinal = (numero >= numero2) ? numero : numero2;

	std::cout << numeroFinal << std::endl;
	*/
	
	
#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio Final;

	/*
	const int notaDeCorte = 20;

	int puntuacion = 0;
	int racha = 1;
	int maxRacha = 2;

	int preguntasCorrectas = 0;
	int preguntasIncorrectas = 0;

	short input;


	//Primera pregunta
	std::string pregunta1 = "¿Cual de estas comidas es originaria de Italia?";
	std::string respuesta1a = "1. Donuts";
	std::string respuesta1b = "2. Pizza";
	std::string respuesta1c = "3. Nuggets";
	std::string respuesta1d = "4. Galetes";
	short solucion1 = 2;

	std::cout << pregunta1 << std::endl;
	std::cout << respuesta1a << std::endl;
	std::cout << respuesta1b << std::endl;
	std::cout << respuesta1c << std::endl;
	std::cout << respuesta1d << std::endl;

	std::cin >> input;

	if (solucion1 == input)
	{
		if (racha < 0) {
			racha = 1;
		}
		puntuacion += racha;
		racha++;

		if (racha > maxRacha) {
			maxRacha = racha;
		}
		preguntasCorrectas++;
	}
	else
	{
		if (racha > 0) {
			racha = -1;
		}
		puntuacion -= racha;
		racha--;

		preguntasIncorrectas++;

		std::cout << "La respuesta correcta era: " << solucion1 << std::endl;

	}

	

	//Segunda pregunta
	std::string pregunta2 = "¿Cual de estas comidas es originaria de Francia?";
	std::string respuesta2a = "1. Pan";
	std::string respuesta2b = "2. Donuts";
	std::string respuesta2c = "3. Croissant";
	std::string respuesta2d = "4. Sopa";
	short solucion2 = 3;

	std::cout << pregunta2 << std::endl;
	std::cout << respuesta2a << std::endl;
	std::cout << respuesta2b << std::endl;
	std::cout << respuesta2c << std::endl;
	std::cout << respuesta2d << std::endl;

	std::cin >> input;

	if (solucion2 == input)
	{
		if (racha < 0) {
			racha = 1;
		}
		puntuacion += racha;
		racha++;

		if (racha > maxRacha) {
			maxRacha = racha;
		}
		preguntasCorrectas++;
	}
	else
	{
		if (racha > 0) {
			racha = -1;
		}
		puntuacion -= racha;
		racha--;

		preguntasIncorrectas++;

		std::cout << "La respuesta correcta era: " << solucion2 << std::endl;

	}



	//Tercera pregunta
	std::string pregunta3 = "¿Cuanto es 3x3x3?";
	std::string respuesta3a = "1. 9";
	std::string respuesta3b = "2. 12";
	std::string respuesta3c = "3. 21";
	std::string respuesta3d = "4. 27";
	short solucion3 = 4;

	std::cout << pregunta3 << std::endl;
	std::cout << respuesta3a << std::endl;
	std::cout << respuesta3b << std::endl;
	std::cout << respuesta3c << std::endl;
	std::cout << respuesta3d << std::endl;

	std::cin >> input;

	if (solucion3 == input)
	{
		if (racha < 0) {
			racha = 1;
		}
		puntuacion += racha;
		racha++;

		if (racha > maxRacha) {
			maxRacha = racha;
		}
		preguntasCorrectas++;
	}
	else
	{
		if (racha > 0) {
			racha = -1;
		}
		puntuacion -= racha;
		racha--;

		preguntasIncorrectas++;

		std::cout << "La respuesta correcta era: " << solucion3 << std::endl;

	}



	//Cuarta pregunta
	std::string pregunta4 = "¿La division 49/7... cual es el resultado?";
	std::string respuesta4a = "1. 7";
	std::string respuesta4b = "2. 8 con residuo 1";
	std::string respuesta4c = "3. 6 con residuo 3";
	std::string respuesta4d = "4. 8";
	short solucion4 = 1;

	std::cout << pregunta4 << std::endl;
	std::cout << respuesta4a << std::endl;
	std::cout << respuesta4b << std::endl;
	std::cout << respuesta4c << std::endl;
	std::cout << respuesta4d << std::endl;

	std::cin >> input;

	if (solucion4 == input)
	{
		if (racha < 0) {
			racha = 1;
		}
		puntuacion += racha;
		racha++;

		if (racha > maxRacha) {
			maxRacha = racha;
		}
		preguntasCorrectas++;
	}
	else
	{
		if (racha > 0) {
			racha = -1;
		}
		puntuacion -= racha;
		racha--;

		preguntasIncorrectas++;

		std::cout << "La respuesta correcta era: " << solucion4 << std::endl;

	}



	//Quinta pregunta
	std::string pregunta5 = "¿Cual de estas marcas de coche es proveniente de Suecia?";
	std::string respuesta5a = "1. Audi";
	std::string respuesta5b = "2. Hummer";
	std::string respuesta5c = "3. Honda";
	std::string respuesta5d = "4. Volvo";
	short solucion5 = 4;

	std::cout << pregunta5 << std::endl;
	std::cout << respuesta5a << std::endl;
	std::cout << respuesta5b << std::endl;
	std::cout << respuesta5c << std::endl;
	std::cout << respuesta5d << std::endl;

	std::cin >> input;

	if (solucion5 == input)
	{
		if (racha < 0) {
			racha = 1;
		}
		puntuacion += racha;
		racha++;

		if (racha > maxRacha) {
			maxRacha = racha;
		}
		preguntasCorrectas++;
	}
	else
	{
		if (racha > 0) {
			racha = -1;
		}
		puntuacion -= racha;
		racha--;

		preguntasIncorrectas++;

		std::cout << "La respuesta correcta era: " << solucion5 << std::endl;

	}



	//Sexta pregunta
	std::string pregunta6 = "¿Cual de estas marcas de coche es proveniente de Alemania?";
	std::string respuesta6a = "1. Cupra";
	std::string respuesta6b = "2. Volvo";
	std::string respuesta6c = "3. Audi";
	std::string respuesta6d = "4. Alfa Romeo";
	short solucion6 = 3;

	std::cout << pregunta6 << std::endl;
	std::cout << respuesta6a << std::endl;
	std::cout << respuesta6b << std::endl;
	std::cout << respuesta6c << std::endl;
	std::cout << respuesta6d << std::endl;

	std::cin >> input;

	if (solucion6 == input)
	{
		if (racha < 0) {
			racha = 1;
		}
		puntuacion += racha;
		racha++;

		if (racha > maxRacha) {
			maxRacha = racha;
		}
		preguntasCorrectas++;
	}
	else
	{
		if (racha > 0) {
			racha = -1;
		}
		puntuacion -= racha;
		racha--;

		preguntasIncorrectas++;

		std::cout << "La respuesta correcta era: " << solucion6 << std::endl;

	}



	//Séptima pregunta
	std::string pregunta7 = "¿Cual de estas marcas de coche es proveniente de Japon?";
	std::string respuesta7a = "1. Seat";
	std::string respuesta7b = "2. MG";
	std::string respuesta7c = "3. Omoda";
	std::string respuesta7d = "4. Honda";
	short solucion7 = 4;

	std::cout << pregunta7 << std::endl;
	std::cout << respuesta7a << std::endl;
	std::cout << respuesta7b << std::endl;
	std::cout << respuesta7c << std::endl;
	std::cout << respuesta7d << std::endl;

	std::cin >> input;

	if (solucion7 == input)
	{
		if (racha < 0) {
			racha = 1;
		}
		puntuacion += racha;
		racha++;

		if (racha > maxRacha) {
			maxRacha = racha;
		}
		preguntasCorrectas++;
	}
	else
	{
		if (racha > 0) {
			racha = -1;
		}
		puntuacion -= racha;
		racha--;

		preguntasIncorrectas++;

		std::cout << "La respuesta correcta era: " << solucion7 << std::endl;

	}



	//Octava pregunta
	std::string pregunta8 = "¿Cual de estos animales es marino?";
	std::string respuesta8a = "1. Rana";
	std::string respuesta8b = "2. Cocodrilo";
	std::string respuesta8c = "3. Salmon";
	std::string respuesta8d = "4. Sapo";
	short solucion8 = 3;

	std::cout << pregunta8 << std::endl;
	std::cout << respuesta8a << std::endl;
	std::cout << respuesta8b << std::endl;
	std::cout << respuesta8c << std::endl;
	std::cout << respuesta8d << std::endl;

	std::cin >> input;

	if (solucion8 == input)
	{
		if (racha < 0) {
			racha = 1;
		}
		puntuacion += racha;
		racha++;

		if (racha > maxRacha) {
			maxRacha = racha;
		}
		preguntasCorrectas++;
	}
	else
	{
		if (racha > 0) {
			racha = -1;
		}
		puntuacion -= racha;
		racha--;

		preguntasIncorrectas++;

		std::cout << "La respuesta correcta era: " << solucion8 << std::endl;

	}



	//Novena pregunta
	std::string pregunta9 = "¿Cual de estos animales no es un mamifero?";
	std::string respuesta9a = "1. Perro";
	std::string respuesta9b = "2. Pato";
	std::string respuesta9c = "3. Caballito de mar";
	std::string respuesta9d = "4. Gato";
	short solucion9 = 4;

	std::cout << pregunta9 << std::endl;
	std::cout << respuesta9a << std::endl;
	std::cout << respuesta9b << std::endl;
	std::cout << respuesta9c << std::endl;
	std::cout << respuesta9d << std::endl;

	std::cin >> input;

	if (solucion9 == input)
	{
		if (racha < 0) {
			racha = 1;
		}
		puntuacion += racha;
		racha++;

		if (racha > maxRacha) {
			maxRacha = racha;
		}
		preguntasCorrectas++;
	}
	else
	{
		if (racha > 0) {
			racha = -1;
		}
		puntuacion -= racha;
		racha--;

		preguntasIncorrectas++;

		std::cout << "La respuesta correcta era: " << solucion9 << std::endl;

	}



	//Décima pregunta
	std::string pregunta10 = "¿Que colores tiene la bandera de España? (Solo el fondo, sin el escudo?";
	std::string respuesta10a = "1. Rojo y Amarillo";
	std::string respuesta10b = "2. Amarillo y Rojo";
	std::string respuesta10c = "3. Granate y Amarillo";
	std::string respuesta10d = "4. Amarillo y Granate";
	short solucion10 = 1;

	std::cout << pregunta10 << std::endl;
	std::cout << respuesta10a << std::endl;
	std::cout << respuesta10b << std::endl;
	std::cout << respuesta10c << std::endl;
	std::cout << respuesta10d << std::endl;

	std::cin >> input;

	if (solucion10 == input)
	{
		if (racha < 0) {
			racha = 1;
		}
		puntuacion += racha;
		racha++;

		if (racha > maxRacha) {
			maxRacha = racha;
		}
		preguntasCorrectas++;
	}
	else
	{
		if (racha > 0) {
			racha = -1;
		}
		puntuacion -= racha;
		racha--;

		preguntasIncorrectas++;

		std::cout << "La respuesta correcta era: " << solucion10 << std::endl;

	}


	//Pregunta final
	if (puntuacion <= 20) {

		std::string preguntaFinal = "¿Donde está el centro ENTI?";
		std::string respuestaFinalA = "1. Hospitalet";
		std::string respuestaFinalB = "2. Barcelona";
		std::string respuestaFinalC = "3. Rubí";
		std::string respuestaFinalD = "4. Castelldefels";
		short solucionFinal = 2;

		std::cout << preguntaFinal << std::endl;
		std::cout << respuestaFinalA << std::endl;
		std::cout << respuestaFinalB << std::endl;
		std::cout << respuestaFinalC << std::endl;
		std::cout << respuestaFinalD << std::endl;

		std::cin >> input;

		if (solucionFinal == input)
		{
			if (racha < 0) {
				racha = 1;
			}
			puntuacion += racha;
			racha++;

			if (racha > maxRacha) {
				maxRacha = racha;
			}
			preguntasCorrectas++;
		}
		else
		{
			if (racha > 0) {
				racha = -1;
			}
			puntuacion -= racha;
			racha--;

			preguntasIncorrectas++;

			std::cout << "La respuesta correcta era: " << solucionFinal << std::endl;

		}
	}
	*/

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 1 Loops;

	/*
	std::string input = "";

	while (input != "Sí" && "Si" && "sí" && "si" && "SÍ" && "SI") {

		std::cout << "¿Quieres cerrar el programa?";
		std::cin >> input;
	}
	*/

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 2 Loops;

	/*
	int sumPares = 0;
	int sumImpares = 0;
	int input = 1;

	while (input != 0) {
		std::cout << "Dame un número: ";
		std::cin >> input;


		if (input == 0) {
		}
		if (input % 2 == 0) {
			sumPares += input;
		}
		else {
			sumImpares += input;

		}
	}

	std::cout << "Pares: " << sumPares << std::endl;
	std::cout << "Impares: " << sumImpares << std::endl;
	*/
	
	#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 3 Loops;

	/*
	srand(100);
	
	int random1 = rand() % 6;
	int random2 = rand() % 6;

	std::cout << random1 << " - " << random2;
	*/
	
#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 4 Loops;

	/*
	srand(time(NULL));

	short num1 = 0;
	short num2 = 0;

	short resultado = 0;
	int puntuacion = -1;

	int rangeInclude = 1;
	int rangeExclude = 9;

	while (resultado == num1 + num2) 
	{
		puntuacion++;
		
		num1 = rangeInclude + rand() % rangeExclude;
		num2 = rangeInclude + rand() % rangeExclude;

		resultado = 0;

		std::cout << "Dime la suma de " << num1 << " + " << num2 << std::endl;
		std::cin >> resultado;

		rangeInclude++;
		rangeExclude++;
	}

	std::cout << "Has fallado la suma de " << num1 << " + " << num2 << ", que es igual a " << num1 + num2 << std::endl;
	*/

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Introuducción for;

	/*
	int num = 0;

	while (num <= 100)
	{
		std::cout << num << std::endl;
		num++;
	}

	for (int num = 0; num < 100; num++)
	{
		std::cout << num << std::endl;
	}
	*/
	
#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 1 for;

	/*
	int inputUser;

	std::cin >> inputUser;

	for (int i = 0; i <= inputUser; i++)
	{
		std::cout << i << std::endl;
	}
	*/
	
#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 1 do while;

	/*
	do
	{
		std::cout << "OPCIONES:" << std::endl;
		std::cout << "---------------------------------" << std::endl;
		std::cout << "1. Suma" << std::endl;
		std::cout << "2. Resta" << std::endl;
		std::cout << "3. Multiplicacion" << std::endl;
		std::cout << "4. Division" << std::endl;
		std::cout << "5. EXIT" << std::endl;
		std::cout << "---------------------------------" << std::endl;


		short userInput;
		std::cin >> userInput;

		int num1;
		int num2;

		switch (userInput)
		{

			case 1:
				std::cout << "Dame un numero." << std::endl;
				std::cin >> num1;
				std::cout << "Dame otro numero." << std::endl;
				std::cin >> num2;

				std::cout << "El resultado es " << num1 + num2 << std::endl;

				break;



			case 2:
				std::cout << "Dame un numero." << std::endl;
				std::cin >> num1;
				std::cout << "Dame otro numero." << std::endl;
				std::cin >> num2;

				std::cout << "El resultado es " << num1 - num2 << std::endl;

				break;



			case 3:
				std::cout << "Dame un numero." << std::endl;
				std::cin >> num1;
				std::cout << "Dame otro numero." << std::endl;
				std::cin >> num2;

				std::cout << "El resultado es " << num1 * num2 << std::endl;

				break;



			case 4:
				std::cout << "Dame un numero." << std::endl;
				std::cin >> num1;
				std::cout << "Dame otro numero." << std::endl;
				std::cin >> num2;

				std::cout << "El resultado es " << num1 / num2 << std::endl;

				break;



			case 5:
				std::cout << std::endl << "Saliendo del programa..." << std::endl;
				exit(0);

			default:
				std::cout << std::endl << "Opcion invalida, elige otra" << std::endl;
				break;


		}
	} while (true);
	*/
	

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 1 Bucles anidados;

	/*
	short numeroFilas;
	short numeroEscrito = 1;

	std::cout << "Ingresa numero de patron: " << std::endl;
	std::cin >> numeroFilas;

	for (int fila = 1; fila <= numeroFilas; fila++) {
		for (int columna = 1; columna <= fila; columna++) {
			std::cout << numeroEscrito << " ";
			numeroEscrito++;
		}
	std::cout << "\n";
	}
	*/

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Juego de casillas por texto para 2 jugadores;

	/*
	// Variable Casillas
	short casillas = 50;
	short casillaActual1 = 0;
	short casillaActual2 = 0;

	//Variable Turnos
	short turnoJugador = 1;

	int userInput;


	do
	{
		std::cout << "---------------------------------" << std::endl;
		std::cout << "Turno de Jugador " << turnoJugador << std::endl;
		std::cout << "---------------------------------" << std::endl;

		//Dado
		short dado = rand() % 6 + 1;
		std::cout << "¡Ha salido un " << dado << std::endl;


		//Llegada a la meta
		if (casillaActual1 >= 50) {
			std::cout << "¡Jugador 1 ha llegado a la meta!" << std::endl;
			exit(0);
		}

		if (casillaActual2 >= 50) {
			std::cout << "¡Jugador 2 ha llegado a la meta!" << std::endl;
			exit(0);
		}




		//Avance de casillas
		if (turnoJugador == 1) {
			casillaActual1 += dado;
			std::cout << "Jugador 1 esta en la casilla " << casillaActual1 << std::endl;

		}
		else {
			casillaActual2 += dado;
			std::cout << "Jugador 2 esta en la casilla " << casillaActual2 << std::endl;
		}



		//Si la casilla es múltiplo de 5... tira el dado de nuevo
		if ((casillaActual1 % 5 == 0 && casillaActual1 != 0) || (casillaActual2 % 5 == 0 && casillaActual2 != 0)) {
			std::cout << "¡Casilla multiplo de 5! debes tirar otro dado" << std::endl;
			std::cout << "Pulsa Enter para tirar el dado:" << std::endl;
			std::cin.ignore();
			std::cin.get();
			continue;
		}

		//Pulsar Enter para al acabar turnos y/o tirar dados
		std::cout << "Pulsa Enter para pasar al siguiente turno..." << std::endl;
		std::cin.ignore();
		std::cin.get();


		if (turnoJugador == 1) {
			turnoJugador = 2;
		}
		else {
			turnoJugador = 1;
		}




		//Casillas que se intercambian

		//Jugador 1
		if (casillaActual1 += dado == 7) {
			casillaActual1 = 12;
		}

		if (casillaActual1 += dado == 12) {
			casillaActual1 = 7;
		}

		if (casillaActual1 += dado == 19) {
			casillaActual1 = 24;
		}

		if (casillaActual1 += dado == 24) {
			casillaActual1 = 19;
		}

		if (casillaActual1 += dado == 31) {
			casillaActual1 = 40;
		}

		if (casillaActual1 += dado == 40) {
			casillaActual1 = 31;
		}


		//Jugador 2
		if (casillaActual2 += dado == 7) {
			casillaActual2 = 12;
		}

		if (casillaActual2 += dado == 12) {
			casillaActual2 = 7;
		}

		if (casillaActual2 += dado == 19) {
			casillaActual2 = 24;
		}

		if (casillaActual2 += dado == 24) {
			casillaActual2 = 19;
		}

		if (casillaActual2 += dado == 31) {
			casillaActual2 = 40;
		}

		if (casillaActual2 += dado == 40) {
			casillaActual2 = 31;
		}



		//Objeto aleatorio
		short objetoAleatorio = rand() % 3 + 1;
		short dadoRetroceder = rand() % 6 + 1;

		//Jugador 1
		if (casillaActual1 == 3 || casillaActual1 == 13 || casillaActual1 == 23 || casillaActual1 == 33 || casillaActual1 == 43) {
			std::cout << "¡Objeto aleatorio!" << std::endl;

			if (objetoAleatorio == 1) {
				std::cout << "¡Tu objeto es un Dado Adicional!, (puedes tirar otro dado)" << std::endl;
				turnoJugador = 1;
			}

			if (objetoAleatorio == 2) {
				std::cout << "¡Tu objeto es un dado que hace retroceder al enemigo (el otro jugador, no cualquier enemigo que tengas en la vida real)" << std::endl;
				casillaActual2 - dadoRetroceder;
			}

			if (objetoAleatorio == 3) {
			std::cout << "¡Tu objeto te hace avanzar entre 1 y 3 casillas! El numero de casillas que avances es tu propia eleccion" << std::endl;
			std::cin >> userInput;
			switch (userInput)
			{

			case 1:
				std::cout << "Avanzas 1 casilla" << std::endl;
				casillaActual1 += 1;

				break;


			case 2:
				std::cout << "Avanzas 2 casillas" << std::endl;
				casillaActual1 += 2;

				break;



			case 3:
				std::cout << "Avanzas 3 casillas" << std::endl;
				casillaActual1 += 3;

				break;


			default:
				std::cout << std::endl << "Opcion invalida, elige otra" << std::endl;
				break;


			}
			}
		}

		//Jugador 2
		if (casillaActual2 == 3 || casillaActual2 == 13 || casillaActual2 == 23 || casillaActual2 == 33 || casillaActual2 == 43) {
			std::cout << "¡Objeto aleatorio!" << std::endl;

			if (objetoAleatorio == 1) {
				std::cout << "¡Tu objeto es un Dado Adicional!, (puedes tirar otro dado)" << std::endl;
				turnoJugador = 2;
			}

			if (objetoAleatorio == 2) {
				std::cout << "¡Tu objeto es un dado que hace retroceder al enemigo (el otro jugador, no cualquier enemigo que tengas en la vida real)" << std::endl;
				casillaActual1 - dadoRetroceder;
			}

			if (objetoAleatorio == 3) {
				std::cout << "¡Tu objeto te hace avanzar entre 1 y 3 casillas! El numero de casillas que avances es tu propia eleccion" << std::endl;
				std::cin >> userInput;
				switch (userInput)
				{

				case 1:
					std::cout << "Avanzas 1 casilla" << std::endl;
					casillaActual2 += 1;

					break;


				case 2:
					std::cout << "Avanzas 2 casillas" << std::endl;
					casillaActual2 += 2;

					break;



				case 3:
					std::cout << "Avanzas 3 casillas" << std::endl;
					casillaActual2 += 3;

					break;


				default:
					std::cout << std::endl << "Opcion invalida, elige otra" << std::endl;
					break;


				}
			}
		}

		
		

	} while (true);

	*/


#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 1 Arrays;

	/*
	float numeros[3] = { 3,4 };
	numeros[2] = numeros[0] + numeros[1];

	std::cout << numeros[2] << std::endl;
	*/

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 2 Arrays;

	/*
	int numeros[AMOUNT_ARRAY];
	
	for (int i = 0; i < AMOUNT_ARRAY; i++) 
	{
		numeros[i] = i;
	}
	*/

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 3 Arrays;

	/*
	int numeros[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int numerosInvertidos[10];

	for (int i = 0; i < 10; i++)
	{
		numerosInvertidos[i] = numeros[9 - i];
	}

	for (int i = 0; i < 10; i++) 
	{
		std::cout << numerosInvertidos[i] << std::endl;
	}
	*/

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 1 Tipos de arrays;

/*
std::srand(std::time(NULL));

int matriz[NUM_FILAS][NUM_COLUMNAS];
*/

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 4 estructuras de control

/*
	int numeroOrigen;
	std::cout << "Dame un numero origen" << std::endl;
	std::cin >> numeroOrigen;

	int numeroFinal;
	std::cout << "Dame un numero final" << std::endl;
	std::cin >> numeroFinal;

	int resultado = 0;

	if (numeroOrigen > numeroFinal) std::cout << "Numero invalido";
	else 
	{
	for (int i = 0; i <= numeroFinal-numeroOrigen; i++)
		{
			if (i % 2 == 0)
			{
				std::cout << "Suma" << std::endl;
				resultado += numeroOrigen + i;

			}
			else
			{
				std::cout << "Multiplicacion" << std::endl;
				resultado *= numeroOrigen + i;
			}
		}
	}

	std::cout << "Suma total de los numeros: " << resultado;
*/

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 5 estructuras de control

/*
	int numeroBase;
	std::cout << "Dame un numero: " << std::endl;
	std::cin >> numeroBase;

	int numeroExponiente;
	std::cout << "Dime el numero al que quieres elevar" << std::endl;
	std::cin >> numeroExponiente;

	std::cout << pow(numeroBase, numeroExponiente) << std::endl;
*/
	

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 6 estructuras de control

/*
	int edad;
	std::cout << "Dime tu edad: " << std::endl;
	std::cin >> edad;

	int nacimiento;
	std::cout << "Dime tu año de nacimiento" << std::endl;
	std::cin >> nacimiento;


	for (int i = 0; i <= edad; i++)
	{
		std::cout << nacimiento + i << " - " << i << std::endl;
	}
*/
	
#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 8 estructuras de control

	/*
	char letraInput;

	bool char1Vocal = false;
	bool char2Vocal = false;

	int counter = 0;

	std::cout << "Dame una vocal o consonante: " << std::endl;
	std::cin >> letraInput;
	std::cout << std::endl;

	if (letraInput == 'a' || letraInput == 'e' || letraInput == 'i' || letraInput == 'o' || letraInput == 'u') {
		char1Vocal = true;
	}
	else {
		char1Vocal = false;
	}

	do {
		std::cout << "Dame una vocal o consonante: " << std::endl;
		std::cin >> letraInput;
		std::cout << std::endl;

		if (letraInput == 'a' || letraInput == 'e' || letraInput == 'i' || letraInput == 'o' || letraInput == 'u') {
			char2Vocal = true;
		}
		else {
			char2Vocal = false;
		}

		if (char1Vocal != char2Vocal) {
			char1Vocal = char2Vocal;
			counter++;
		}
		else {
			break;
		}
	} while (true);

	std::cout << counter;
	*/
	
#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 9 estructuras de control

	/*
	char usuario;
	usuario = 'user';
	char userInput;

	int contraseña;
	contraseña = 1234;
	int contraseñaInput;
	

	std::cout << "Indica el nombre de usuario: " << std::endl;
	std::cin >> userInput;
	std::cout << std::endl;

	std::cout << "Indica la contraseña: " << std::endl;
	std::cin >> contraseñaInput;
	std::cout << std::endl;

	if (userInput != usuario) {
		std::cout << "Usuario incorrecto" << std::endl;
	}
	if (contraseñaInput != contraseña) {
		std::cout << "Contraseña incorrecta" << std::endl;
	}
	if (userInput != usuario && contraseñaInput != contraseña) {
		std::cout << "Usuario y contraseña incorrectos, intentalo de nuevo." << std::endl;
	}
	*/

#pragma endregion; INACABADO

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Hundir la Flota

	//Variables
	int tamaño = 10;
	short turnoJugador = 1;
	int altura;
	int latitud;
	int orientacionBarcos = rand() % 2;
	int tamañoBarco = rand() % 6;



	//Creación de tableros
	char tablero1[10][10];
	for (int i = 0; i < tamaño; i++) {
		for (int j = 0; j < tamaño; j++) {
		tablero1[i][j]='~';
		}
	}

	char tablero2[10][10];
	for (int i = 0; i < tamaño; i++) {
		for (int j = 0; j < tamaño; j++) {
			tablero2[i][j] = '~';
		}
	}



	//Creación de barcos
	for (int i = 2; i < tamañoBarco; i++) {
		for (int j = 2; i < tamañoBarco; i++) {
			tablero1[i][j] = tamañoBarco;
		}
		
	}


	//Mostrar tableros al inicio
	std::cout << "Tablero del jugador 1" << std::endl;

	for (int i = 0; i < tamaño; i++) {
		for (int j = 0; j < tamaño; j++) {
			std::cout << tablero1[i][j];
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Tablero del jugador 2" << std::endl;

	for (int i = 0; i < tamaño; i++) {
		for (int j = 0; j < tamaño; j++) {
			std::cout << tablero2[i][j];
		}
		std::cout << std::endl;
	}


	
	//Bucle general del juego
	do {


		//Indicar turnos
		std::cout << std::endl;
		std::cout << "---------------------------------" << std::endl;
		std::cout << "Turno de Jugador " << turnoJugador << std::endl;
		std::cout << "---------------------------------" << std::endl;



		//Cambios de turno
		if (turnoJugador == 1) {
			turnoJugador = 2;
		}
		else {
			turnoJugador = 1;
		}



		//Pedir al jugador dónde atacar
		std::cout << "Altura a la que atacar: " << std::endl;
		std::cin >> altura;
		std::cout << std::endl;

		std::cout << "Latitud a la que atacar: " << std::endl;
		std::cin >> latitud;
		std::cout << std::endl;



		//Valores incorrectos al indicar dónde atacar
		if (((altura < 0 || latitud < 0) && (altura >= 10 || latitud >= 10)) || (altura == 0 || latitud == 0)) {
			std::cout << "Incorrecto, los valores deben ser positivos y no mayores de 10..." << std::endl;
			if (turnoJugador == 2) {
				turnoJugador = 1;
			}
			else {
				turnoJugador = 2;
			}
		}



		//Marcar en el tablero donde haya indicado el jugador
		if (turnoJugador == 1) {
			tablero1[altura - 1][latitud - 1] = 'X';
		}
		else {
			tablero2[altura - 1][latitud - 1] = 'X';
			
		}
			


		//Mostrar los tableros después del turno del jugador
		std::cout << "Tablero del jugador 1" << std::endl;
		
		for (int i = 0; i < tamaño; i++) {
			for (int j = 0; j < tamaño; j++) {
				std::cout << tablero1[i][j];
			}
			std::cout << std::endl;
		}

		std::cout << std::endl;
		std::cout << "Tablero del jugador 2" << std::endl;

		for (int i = 0; i < tamaño; i++) {
			for (int j = 0; j < tamaño; j++) {
				std::cout << tablero2[i][j];
			}
			std::cout << std::endl;
		}



			



	} while (tamaño < 11);

	
	


#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 1 carácteres (con librería de matemáticas)

/*
	float primerNumero;
	float segundoNumero;
	int resultadoRedondeado;


	std::cout << "Dime un numero: " << std::endl;
	std::cin >> primerNumero;

	std::cout << "Dime otro numero: " << std::endl;
	std::cin >> segundoNumero;

	resultadoRedondeado = round(primerNumero + segundoNumero);

	std::cout << "El resultado literal es: " << primerNumero + segundoNumero << ", y el resultado redondeado es: " << resultadoRedondeado << std::endl;
*/
	
#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 1 carácteres (sin librería de matemáticas)

/*
	float primerNumero;
	float segundoNumero;
	float resultadoLiteral;
	int resultadoRedondeado;


	std::cout << "Dime un numero: " << std::endl;
	std::cin >> primerNumero;

	std::cout << "Dime otro numero: " << std::endl;
	std::cin >> segundoNumero;

	resultadoLiteral = primerNumero + segundoNumero;
	resultadoRedondeado = primerNumero + segundoNumero + 0.5;

	std::cout << "El resultado literal es: " << resultadoLiteral << ", y el resultado redondeado es: " << resultadoRedondeado << std::endl;
*/
	
#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejemplo 1 char y cast

/*
	char caracter1 = 'a';
	char caracter2 = 97;

	std::cout << caracter1 << std::endl;
	std::cout << caracter2 << std::endl;

	std::cout << (int) caracter1 << std::endl;
	std::cout << (int) caracter2 << std::endl;
*/

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 2 carácteres

/*
	char caracter;

	std::cout << "Introduce un caracter: " << std::endl;
	std::cin >> caracter;

	if ((caracter >= 65 && caracter <= 90) || (caracter > 97 && caracter < 122)) {
		std::cout << "El caracter introducido es una letra." << std::endl;
	}
	else {
		std::cout << "El caracter introducido no es una letra." << std::endl;
	}
*/

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 3 carácteres

/*
	char caracter;

	std::cout << "Introduce una letra: " << std::endl;
	std::cin >> caracter;

	if (caracter >= (int)'a' && caracter <= (int)'z') {
		caracter -= INTERVAL;
		std::cout << "El caracter convertido es: " << caracter << std::endl;
	}
	else if (caracter >= (int)'A' && caracter <= (int)'Z') {
		caracter += INTERVAL;
		std::cout << "El caracter convertido es: " << caracter << std::endl;
	}
	else {
		std::cout << "El caracter introducido no es una letra." << std::endl;
	}
*/
	
#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Ejercicio 1 strings

/*
	std::string palabra;

	std::cout << "Dame una palabra: " << std::endl;
	std::cin >> palabra;

	for (int i = 0; i < palabra.length(); i++) {
		std::cout << palabra[i] << std::endl;
	}
*/
	
#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Juego del ahorcado; INACABADO

/*
	char userInput;
	short userOportunities;
	std::string palabrasParaAcertar[3] = {
		"Hola",
		"Esternocleidomastoideo",
		"Casanova"
	};


	std::string palabraSeleccionada = palabrasParaAcertar[0];
	userOportunities = palabraSeleccionada.length();

	std::cout << "Palabra seleccionada: " << palabraSeleccionada << std::endl;

	std::string palabraEscondida;

	for (int i = 0; i < palabraSeleccionada.length(); i++) {
		palabraEscondida[i] = '_';
	}

	do {
		std::cout << palabraEscondida << std::endl;
		std::cout << "Dame una letra: " << std::endl;
		std::cin >> userInput;

		for (int i = 0; i < palabraEscondida.length(); i++) {
			if (userInput == palabraSeleccionada[i]) {
				palabraEscondida[i] = palabraSeleccionada[i];
			}
		}

		if (!letraEncontrada) {
			userOportunities--;
		}

		std::cout << palabraEscondida << std::endl;

	}
*/

#pragma endregion;

////////////////////////////////////////////////////////////////////////////////////////////////



};																																																					