#include <stdio.h>
int main ()
{
	int var=20;
	int *v;
	v=&var;

	printf("la dirección de la variable var es: %x\n", &var);
	printf("Dirección guardada en el apuntador v: %x\n", v);
	printf("El valor de *v: %d\n", *v);

return 0;
}
