#include <stdio.h>
#include <stdlib.h>
//La función inicializar inicializa los datos de la matriz, las de las temperaturas fijas, hasta las que van en el centro de la matriz.

//Para esta funcion se necesitan los datos de las temperaturas y del numero de puntos por lado en la matriz.
void inicializar(float l1, float l2, float l3, float l4, int n)

{
//Aqui se declaran las variables de los contadores para el for y tambien se declara la variable de la matriz.
	int i, j;
	float T[n+2][n+2];
//indico que se usara un archivo al que me referire como out, este archivo sera para imprimir los valores iniciales de la matriz en un archivo.
	FILE* out;
//Aqui inicializo todos los puntos de la matriz a 0.
	for (i=0; i<(n+2); i++)
		{
		for (j=0; j<(n+2); j++)
			{
			T[i][j]=0;
			}
		}
//Y aqui se inicializan los valores de las columnas y filas adyacentes a la placa que tendran las temperaturas fijas impuestas por el usuario.
//Para todo valor de i=0 se le ingresara la temperatura 1.
	for (j=1; j<(n+1); j++)
		{
		T[0][j]=l1;
		}
//Para todo valor de i=n+1 se le ingresara la temperatura 2.
	for (j=1; j<(n+1); j++)
		{
		T[(n+1)][j]=l2;
		}
//Para todo valor de j=0 se le ingresara la temperatura 4.
	for (i=1; i<(n+1); i++)
		{
		T[i][0]=l4;
		}
//Para todo valor de j=n+1 se le ingresara la temperatura 3.
	for (i=1; i<(n+1); i++)
		{
		T[i][(n+1)]=l3;
		}

//Aqui se abre el archivo 0placa.txt y se imprime dentro los valores iniciales de la matriz para que sean leidos en la función main.
	out = fopen("0placa.txt", "w");

	for (j=0; j<(n+2); j++)
		{
		for (i=0; i<(n+2); i++)
			{
		fprintf(out, "%f ", T[i][j]);
			}
		fprintf(out, "\n");
		}

	fclose(out);

}
