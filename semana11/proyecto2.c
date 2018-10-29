//Este programa fue hecho por Judá Rodríguez(emdajhuda) el 22 de octubre del 2018.
#include <stdio.h>
//Aqui indico que voy a usar unar variable para inicializar la matriz.
void inicializar(float l1, float l2, float l3, float l4, int n);
//Para la función main daremos desde la terminal el archivo a ejecutar y el nombre del archivo donde estan los datos iniciales.
int main(int arg, char *argt[])
{
//Declaramos la variable para escanear los datos.
	char *datos;
//Aqui declaré la variable con la que ire guardando los nombres de los archivos para imprimir.
	char placa[60];
//Declaré las variables del tamaño de la matriz, temperaturas, contadores para los ciclos y epsilon.
	int N, n, i, j, c, cw=0, p=1;

	float l1, l2, l3, l4, em=1, e=0.001;

//Se declaró las variables de donde se sacaran los datos y de donde se abriran.
	FILE* data;
	FILE* out;
//Le muestra el programa que se esta ejecutando al usuario.
	printf("El programa que estas ejecutando es: %s\n", argt[0]);

//Le asigna a el segundo termino ingresado en la terminal al archivo que se abrira para escanear los datos.
	datos=argt[1];
//Se leen los datos en el siguiente orden, primero temperaturas y despues el numero de puntos por lado en la matriz.
	data = fopen(datos, "r");

	fscanf(data, "%f %f %f %f %i", &l1, &l2, &l3, &l4, &n);

	fclose(data);
//Aqui calculo el numero de puntos en la matriz para calcular el numero de epsilon en la matriz.
	N=n*n;
//Se declaran las matrices con tamaño n+2, para que agregue las columnas y filas con temperatura fija, ademas se declara un array para los valores del epsilon.
	float T[n+2][n+2], Tv[n+2][n+2], ei[N];
//Aqui se inicializan los puntos en la matriz temperatura vieja a 0.
		for (i=0; i<(n+2); i++)
		{
		for (j=0; j<(n+2); j++)
			{
			Tv[i][j]=0;
			}
		}

//Este if es para que se ejecute el programa solo si en la terminal se dan los nombres del programa a ejecutar y el archivo del que se sacaran los datos iniciales.

	if(arg==2)
	{

//Con esta función se inicializan los puntos en la matriz.

	inicializar(l1, l2, l3, l4, n);

//Se escanea la matriz con los puntos iniciales.

	out = fopen("0placa.txt", "r");

	for (j=0; j<(n+2); j++)
		{
		for (i=0; i<(n+2); i++)
			{
			fscanf(out, "%f", &T[i][j]);
			}
		}

	fclose(out);

//Este ciclo while se repite maximo 3000 veces o hasta que alcance el equilibrio, para mi el equilibrio se alcanza cuando el epsilon mas grande es igual a 0.001 (dato que indique al inicializar la variable).

	while (cw<3000 && em>e)
	{
//inicializo el contador c a 0 para los epsilon.
	c=0;
//En este ciclo for calculo el promedio de las temperaturas en las celdas adyacentes y calculo su epsilon.
	for (j=1; j<(n+1); j++)
		{
		for (i=1; i<(n+1); i++)
			{
			T[i][j]=(T[i-1][j]+T[i+1][j]+T[i][j+1]+T[i][j-1])/4;
			ei[c]=((T[i][j]-Tv[i][j])/T[i][j]);
			//Aqui aumento el contador del epsilon una unidad para el siguiente calculo de promedio de temperatura.
			c++;
			//igualo la temperatura que acabo de sacar con la vieja, asi puedo calcular el siguiente epsilon.
			Tv[i][j]=T[i][j];
			}
		}
//Aqui encuentro el epsilon maximo en la matriz.
	for(c=0; c<N; c++)
		{
//Escanea los epsilon uno por uno y si el epsilon individual es mayor al epsilon maximo, el epsilon maximo obtendra el valor del epsilon individuial leido.
			if (em < ei[c])
			{
				em = ei[c];
			}
		}
//Aqui le asigno un diferente nombre a cada archivo en el que se imprimira.
	sprintf(placa, "%dplaca.txt", p);
//Como son muchos calculos solo imprimire cada 50, asi maximo tendre 60 archivos de texto.
	if(cw%50==0)
		{
//Aqui imprimo la matriz y aumento una unidad en el contador de impresiones, asi cuando imprima los nombres de los archivos los escribira de uno en uno y si utilizo el contador del ciclo while me escribira los nombres de los archivos con saltos muy grandes en numero.
		out = fopen(placa, "w");

		for (j=1; j<(n+1); j++)
			{
			for (i=1; i<(n+1); i++)
				{
				fprintf(out, "%f ", T[i][j]);
				}
			fprintf(out, "\n");
			}
		fclose(out);
		p++;
		}
//Le agrego una unidad al contador del ciclo while para que se pueda detener si llega a hacer el ciclo 3000 veces.
	cw++;
	}
//Esto hace que el programa se detenga si no ingresamos los argumentos suficientes en la terminal o exedemosel numero de argumentos.
	}
	else if(arg>2)
	{
		printf("Mas argumentos de los necesarios.\n");
	}
	else
	{
		printf("Se requiere de al menos 2 argumentos.\n");
	}
//Se cierra el programa

return 0;
}
