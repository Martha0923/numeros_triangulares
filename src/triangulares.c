#include <stdio.h>

void triangulares(int n) // Funcion para calcular numeros triangulares
{ 
	for (int i = 1; i <= n; i++) // Se crea un ciclo que va desde i igual uno y mientras i sea igual o menor que la cantidad 
				     // de numeros triangulares, i se ira incrementando de uno en uno
		printf ( "%d", i*(i+1)/2);
}

int main() // funcion principal
{
	int n=100; // cantidad de numeros triangulares que quiero
	triangulares(n);
	return 0;
}

