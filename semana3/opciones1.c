#include <stdio.h>

int main()
{
int opcion;

	printf("Teclea 1 ó 2 para continuar con el programa \n");
	scanf("%i", &opcion);

switch(opcion)

{
	case 1:
		printf("Bien el 1 es de ganadores \n");
		printf("Gracias por participar \n");

		break;
	case 2:
		printf("Bien el 2 le gana al 1 por que es mas grande \n");
		printf("Gracias por participar \n");

		break;
	default:
		printf("Esta chido que quieras ser rebelde, pero especificamente dije 1 ó 2\n");
		printf("Aprende a leer \n");
}

}
