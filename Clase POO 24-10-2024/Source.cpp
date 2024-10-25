
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>


int main()
{

	int matriz[6][6];
	int filas=0, columnas=0, fil, col, val,val_max = 0;

	std::cout << "En ese programa usted definitrá una matriz y el programa \n buscara relojes de arena dentro de la matriz y le retornara el valor maximo";
	do {
		if (filas > 6)
			std::cout << "No de admiten mas de 6 filas\n";
			std::cout << "Ingrese las filas del arreglo\n";
		scanf_s("%i", &filas);
	} while (filas > 6);
	do {
		if (columnas > 6)
			std::cout << "No de admiten mas de 6 columnas\n";
			std::cout << "Ingrese las columnas del arreglo\n";
		scanf_s("%i", &columnas);
	} while (columnas > 6);

	std::cout << "Ahora hay que ingresar los valores del arreglo\n\n";

	for (fil = 0; fil < filas; fil++) {
		for (col = 0; col < columnas; col++) {
			std::cout << "Ingrese el valor de la fila " << fil+1 <<" columna " << col+1 << "\n";
			scanf_s("%i", &matriz[fil][col]);
		}
	}
		std::cout << "\n";
		std::cout << "\nla matriz ingresada es:\n";
		for (fil = 0; fil < filas; fil++) {
			for (col = 0; col < columnas; col++) {
				std::cout << "["<< matriz[fil][col] <<"]";
			}
			printf("\n");
		}

		for (fil = 0; fil < filas - 2; fil++) {
			for (col = 0; col < columnas - 2; col++) {
				val = matriz[fil][col] + matriz[fil][col + 1] + matriz[fil][col + 2] + matriz[fil + 1][col + 1] + matriz[fil + 2][col] + matriz[fil + 2][col + 1] + matriz[fil + 2][col + 2];
				if (val > val_max) {
					val_max = val;
				}
			}
		}
		std::cout << "\nEl Relog maximo es: "<<val_max;
		return 0;
	}
