// JuegoMazmorra.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Personaje.h"
#include "EnemigoFinal.h"
using namespace std;

int main()
{
	Personaje enemigo(50, 30, "Gumball", 3, 3);
	Personaje jugador(50, 25, "Darwin", 0, 3);

    const int filas = 5;
    const int columnas = 5;
    char tablero[filas][columnas];
    //Tabla
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            tablero[i][j] = '*';
        }
    }
    tablero[enemigo.getPosY()][enemigo.getPosX()] = 'G'; // Colocar al enemigo
    tablero[jugador.getPosY()][jugador.getPosX()] = 'D'; // Colocar al jugador
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << tablero[i][j] << ' ';
        }
        cout <<endl;
    }
    return 0;
}

