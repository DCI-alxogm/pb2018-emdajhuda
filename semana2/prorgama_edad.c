/*creado el 12 de agosto del 2018 por Judá Rodriguez(emdajhuda) y modificado el 15 de agosto del 2018 para que clacule la edad en el 2028*/

#include<stdio.h>

int main()
{

int edad, edad2028;
char nombre[20];

	printf("Hola extraño \n");
	printf("¿Cómo te llamas? \n");	
	printf("Introduce tu nombre \n");
	scanf("%s", nombre);
	printf("%s, soy el programa de un adivino llamado Judá \n", nombre);
	printf("Para demostrarlo adivinare tu edad en el 2028 \n");	
	printf("Introduce tu edad: \n");
	scanf("%i", &edad);
	(edad2028=edad+10);
	printf("\n %s, tu edad en el 2028 sera: %i años \n", nombre, edad2028);
return(0);

}
/*Termine de escribir el programa*/
