#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>


int main() {

    // Variables
    int tama�o = 10;                        //Variable que indica el tama�o del tablero
    short turnoJugador = 1;                 //Variable para los turnos
    int altura;                             //Variable para la altura dentro del tablero
    int latitud;                            //Variable para la latitud dentro del tablero
    int orientacionBarcos;                  //Orientaci�n de los barcos a la hora de colocarlos
    int tama�oBarco[] = { 3, 4, 5, 6 };     //Variable donde se guardan los tama�os de los barcos




    // Creaci�n de tableros
    char tablero1[10][10];                      //Creo un tablero de 10 por 10
    for (int i = 0; i < tama�o; i++) {          //Creo i (latitud) y le digo que se aumente hasta que no supere 10
        for (int j = 0; j < tama�o; j++) {      //Creo j (altura) y le digo que se aumente hasta que no supere 10
            tablero1[i][j] = '~';               //Indico que quiero que los car�cteres a lo largo y ancho del tablero, que se muestren con ~
        }
    }

    char tablero2[10][10];                      //Creo un tablero de 10 por 10
    for (int i = 0; i < tama�o; i++) {          //Creo i (latitud) y le digo que se aumente hasta que no supere 10
        for (int j = 0; j < tama�o; j++) {      //Creo j (altura) y le digo que se aumente hasta que no supere 10
            tablero2[i][j] = '~';               //Indico que quiero que los car�cteres a lo largo y ancho del tablero, que se muestren con ~
        }
    }




    srand(time(0));                             //Iniciado del random para usar despu�s en la creaci�n de barcos


    //Creaci�n de barcos del tablero 1
    for (int b = 0; b < 4; b++) {               //Creo b (por barcos) y le digo que se incremente hasta no m�s de 4 (cantidad de barcos)
        int longitudBarco = tama�oBarco[b];     //Creo y doy de valor a la variable que sea un valor de b dentro de los tama�os de los barcos
        bool barcoColocado1 = false;            //Creo un booleano sobre si el barco est� colocado (por uno de los tama�os del barco)


        while (!barcoColocado1) {               //Creo un bucle que dice que si por ese tama�o de barco, el booleano de colocado no es verdadero, har� lo siguiente...
            int x = rand() % tama�o;            //Seleccionar� al azar una latitud de m�ximo el tama�o del tablero
            int y = rand() % tama�o;            //Seleccionar� al azar una altura de m�ximo el tama�o del tablero
            orientacionBarcos = rand() % 2;     //Y aqu� le dir� si la orientaci�n del barco ser� horizontal o vertical (seleccionado al azar)
            bool posicionValida = true;         //Indica si la posici�n del barco al colocarlo es v�lida o no


            //Comprobar si ya hay barcos situados en una posici�n
            if (orientacionBarcos == 0 && (x + longitudBarco) <= tama�o) {        //Condicional que dice que si la orientaci�n del barco es horizontal y el sumado del tama�o desde la posici�n es igual o menor que el tablero har�...
                for (int i = 0; i < longitudBarco; i++) {                         //Creo i, que incrementar� hasta no m�s de la longitud del barco          
                    if (tablero1[x + i][y] != '~') {                              //dicha i ser� usada con un condicional para ver si en la fila hay algo diferente a ~ en el tablero (un barco)
                        posicionValida = false;                                   //Y si se cumple el condicional (hay barco donde se pretende poner el barco actual), entonces dice que la posici�n no es valida
                    }
                }

                if (posicionValida = true) {                                      //Si se recibe que no hay pegas con la posici�n, har� lo siguiente...
                    for (int i = 0; i < longitudBarco; i++) {                     //Creo i, que incrementar� hasta no m�s del tama�o del barco
                        tablero1[x + i][y] = '0' + longitudBarco;                 //Coger� el tama�o del barco y lo mostrar� en vez de ~
                        barcoColocado1 = true;                                    //Indicar� que el barco actual ya est� colocado
                    }
                }
            }
            else if (orientacionBarcos == 1 && (y + longitudBarco) <= tama�o) {   //Condicional que dice que si la orientaci�n del barco es vertical y el sumado del tama�o desde la posici�n es igual o menor que el tablero har�...
                for (int j = 0; j < longitudBarco; j++) {                         //Creo j, que incrementar� hasta no m�s de la longitud del barco
                    if (tablero1[x][y + j] != '~') {                              //dicha j ser� usada con un condicional para ver si la columna hay algo diferente a ~ en el tablero (un barco)
                        posicionValida = false;                                   //Y si se cumple el condicional (hay barco donde se pretende poner el barco actual), entonces dice que la posici�n no es valida
                    }
                }

                if (posicionValida = true) {                                      //Si se recibe que no hay pegas con la posici�n, har� lo siguiente...
                    for (int j = 0; j < longitudBarco; j++) {                     //Creo j, que incrementar� hasta no m�s del tama�o del barco
                        tablero1[x][y + j] = '0' + longitudBarco;                 //Coger� el tama�o del barco y lo mostrar� en vez de ~
                        barcoColocado1 = true;                                    //Indicar� que el barco actual ya est� colocado
                    }
                }
            }
        }
    }


    //Creaci�n de barcos del tablero 2
    for (int b = 0; b < 4; b++) {               //Creo b (por barcos) y le digo que se incremente hasta no m�s de 4 (cantidad de barcos)
        int longitudBarco2 = tama�oBarco[b];    //Creo y doy de valor a la variable que sea un valor de b dentro de los tama�os de los barcos
        bool barcoColocado2 = false;            //Creo un booleano sobre si el barco est� colocado (por uno de los tama�os del barco)


        while (!barcoColocado2) {               //Creo un bucle que dice que si por ese tama�o de barco, el booleano de colocado no es verdadero, har� lo siguiente...
            int x2 = rand() % tama�o;           //Seleccionar� al azar una latitud de m�ximo el tama�o del tablero
            int y2 = rand() % tama�o;           //Seleccionar� al azar una altura de m�ximo el tama�o del tablero
            orientacionBarcos = rand() % 2;     //Y aqu� le dir� si la orientaci�n del barco ser� horizontal o vertical (seleccionado al azar)
            bool posicionValida2 = true;        //Indica si la posici�n del barco al colocarlo es v�lida o no



            //Comprobar si ya hay barcos situados en una posici�n
            if (orientacionBarcos == 0 && x2 + longitudBarco2 <= tama�o) {           //Condicional que dice que si la orientaci�n del barco es horizontal y el sumado del tama�o desde la posici�n es igual o menor que el tablero har�...
                for (int i = 0; i < longitudBarco2; i++) {                           //Creo i, que incrementar� hasta no m�s de la longitud del barco
                    if (tablero2[x2 + i][y2] != '~') {                               //dicha i ser� usada con un condicional para ver si en la fila hay algo diferente a ~ en el tablero (un barco)
                        posicionValida2 = false;                                     //Y si se cumple el condicional (hay barco donde se pretende poner el barco actual), entonces dice que la posici�n no es valida
                    }
                }

                if (posicionValida2 = true) {                                        //Si se recibe que no hay pegas con la posici�n, har� lo siguiente...          
                    for (int i = 0; i < longitudBarco2; i++) {                       //Creo i, que incrementar� hasta no m�s del tama�o del barco
                        tablero2[x2 + i][y2] = '0' + longitudBarco2;                 //Coger� el tama�o del barco y lo mostrar� en vez de ~
                        barcoColocado2 = true;                                       //Indicar� que el barco actual ya est� colocado
                    }
                }
            }
            else if (orientacionBarcos == 1 && y2 + longitudBarco2 <= tama�o) {      //Condicional que dice que si la orientaci�n del barco es vertical y el sumado del tama�o desde la posici�n es igual o menor que el tablero har�...
                for (int j = 0; j < longitudBarco2; j++) {                           //Creo j, que incrementar� hasta no m�s de la longitud del barco
                    if (tablero2[x2][y2 + j] != '~') {                               //dicha j ser� usada con un condicional para ver si la columna hay algo diferente a ~ en el tablero (un barco)
                        posicionValida2 = false;                                     //Y si se cumple el condicional (hay barco donde se pretende poner el barco actual), entonces dice que la posici�n no es valida
                    }
                }

                if (posicionValida2 = true) {                                        //Si se recibe que no hay pegas con la posici�n, har� lo siguiente...
                    for (int j = 0; j < longitudBarco2; j++) {                       //Creo j, que incrementar� hasta no m�s del tama�o del barco
                        tablero2[x2][y2 + j] = '0' + longitudBarco2;                 //Coger� el tama�o del barco y lo mostrar� en vez de ~
                        barcoColocado2 = true;                                       //Indicar� que el barco actual ya est� colocado
                    }

                }
            }
        }
    }




    //Imprimir tableros al inicio de la partida
    std::cout << "Tablero del jugador 1" << std::endl;                    //Texto superior al tablero
    for (int i = 0; i < tama�o; i++) {                                    //Creo i, que se incrementa hasta llegar al tama�o del tablero 1
        for (int j = 0; j < tama�o; j++) {                                //Creo j, que se incrementa hasta llegar al tama�o del tablero 1
            std::cout << tablero1[i][j] << " ";                           //Imprime el tablero 1, con " " que son los espacios entre cada car�cter, si no ser�a ~~~~~~~~~~...
        }
        std::cout << std::endl;                                           //Una vez impreso el tablero, finaliza la l�nea
    }

    std::cout << std::endl << "Tablero del jugador 2" << std::endl;       //Texto superior al tablero, con un finalizador de l�nea antes del texto para que haya m�s espacio y sea m�s visible
    for (int i = 0; i < tama�o; i++) {                                    //Creo i, que se incrementa hasta llegar al tama�o del tablero 2
        for (int j = 0; j < tama�o; j++) {                                //Creo j, que se incrementa hasta llegar al tama�o del tablero 2
            std::cout << tablero2[i][j] << " ";                           //Imprime el tablero 2, con " " que son los espacios entre cada car�cter, si no ser�a ~~~~~~~~~~...
        }
        std::cout << std::endl;                                           //Una vez impreso el tablero, finaliza la l�nea
    }




    //Bucle general del juego
    bool juegoComenzado = true;         //Bucle que indica si la partida ha comenzado

    do {


        //Indicar turnos
        std::cout << std::endl;                                                 //Finaliza l�nea previamente
        std::cout << "---------------------------------" << std::endl;
        std::cout << "Turno de Jugador " << turnoJugador << std::endl;          //Texto para mostrar el turno correspondiente
        std::cout << "---------------------------------" << std::endl;



        //Cambios de turno
        if (turnoJugador == 1) {        //Condicional que cambia el turno del 1 al 2 cada vez que finaliza una ronda
            turnoJugador = 2;
        }
        else {
            turnoJugador = 1;           //Y si ten�a turno el 2, cambia al 1
        }



        //Pedir al jugador d�nde atacar
        std::cout << "Altura a la que atacar: ";                    //Pide una altura a la que atacar
        std::cin >> altura;                                         //Registra la altura dicha por el usuario
        std::cout << "Latitud a la que atacar: ";                   //Pide una latitud a la que atacar
        std::cin >> latitud;                                        //Registra la latitud dicha por el usuario



        //Comprobar si los valores son correctos
        if ((altura < 1 || altura > 10 || latitud < 1 || latitud > 10) && turnoJugador == 1) {          //Si el n�mero es menor a 1 o mayor a 10 tanto en altura como latitud y es el turno del Jugador 1...
            std::cout << "Incorrecto, los valores deben estar entre 1 y 10." << std::endl;              //Le dice al usuario que el valor es incorrecto...
            turnoJugador == 1;                                                                          //Y le devuelve al turno
        }

        if ((altura < 1 || altura > 10 || latitud < 1 || latitud > 10) && turnoJugador == 2) {          //Si el n�mero es menor a 1 o mayor a 10 tanto en altura como latitud y es el turno del Jugador 2...
            std::cout << "Incorrecto, los valores deben estar entre 1 y 10." << std::endl;              //Le dice al usuario que el valor es incorrecto...
            turnoJugador == 2;                                                                          //Y le devuelve al turno
        }



        //Aqu� se resta 1 a ambos valores introducidos ya que para el jugador las l�neas van de 1 a 10 pero para el programa van de 0 a 9
        altura -= 1;
        latitud -= 1;



        //Imprimir lo que haya puesto el jugador
        if (turnoJugador == 1) {                                                        //Condicional durante turno del jugador 1
            if (tablero2[altura][latitud] != '~' && tablero2[altura][latitud] != 'O') { //Si no hay ~ ni O en el tablero rival, querr� decir que es barco impactado
                tablero2[altura][latitud] = 'X';                                        //Indica que impacta en el barco
                std::cout << "Barco alcanzado!" << std::endl;                           //Comunica al usuario
            }
            else {                                                                      //Si no es as�...
                tablero2[altura][latitud] = 'O';                                        //Indica que es agua
                std::cout << "Agua, prueba en otra posicion" << std::endl;              //Dice al usuario que pruebe en otra posicion
            }
        }
        else {                                                                          //Si no ejecuta el condicional el jugador 1, entonces lo har� el 2
            if (tablero1[altura][latitud] != '~' && tablero1[altura][latitud] != 'O') { //Si no hay ~ ni O en el tablero rival, querr� decir que es barco impactado
                tablero1[altura][latitud] = 'X';                                        //Indica que impacta en el barco
                std::cout << "Barco alcanzado!" << std::endl;                           //Comunica al usuario
            }
            else {                                                                      //Si no es as�...
                tablero1[altura][latitud] = 'O';                                        //Indica que es agua
                std::cout << "Agua, prueba en otra posicion" << std::endl;              //Dice al usuario que pruebe en otra posicion
            }
        }



        //Mostrar los tableros despu�s del ataque
        std::cout << "Tablero del jugador 1" << std::endl;              //Texto superior al tablero

        for (int i = 0; i < tama�o; i++) {                              //Crea i, e incrementa hasta el tama�o del tablero
            for (int j = 0; j < tama�o; j++) {                          //Crea j, e incrementa hasta el tama�o del tablero
                if (tablero1[i][j] != 'X' && tablero1[i][j] != 'O') {   //Condicional que dice que si no hay agua ni impacto...
                    std::cout << "~ ";                                  //Imprime ~ en vez de los n�meros del principio (oculta los barcos)
                }
                else {
                    std::cout << tablero1[i][j] << " ";                 //Si no se cumple el condicional, imprime normal
                }
            }
            std::cout << std::endl;                                     //Finaliza la l�nea
        }

        std::cout << std::endl << "Tablero del jugador 2" << std::endl; //Texto superior al tablero
        for (int i = 0; i < tama�o; i++) {                              //Crea i, e incrementa hasta el tama�o del tablero
            for (int j = 0; j < tama�o; j++) {                          //Crea j, e incrementa hasta el tama�o del tablero
                if (tablero2[i][j] != 'X' && tablero2[i][j] != 'O') {   //Condicional que dice que si no hay agua ni impacto...
                    std::cout << "~ ";                                  //Imprime ~ en vez de los n�meros del principio (oculta los barcos)
                }
                else {
                    std::cout << tablero2[i][j] << " ";                 //Si no se cumple el condicional, imprime normal
                }
            }
            std::cout << std::endl;                                     //Finaliza la l�nea
        }


    } while (juegoComenzado); //Mientras que el bucle juego comenzado est�, seguir� a�adiendo rondas

    return 0;                 //Si todo lo anterior se ejecuta bien, devuelve 0 (todo ok)
}
