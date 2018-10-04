#include <stdio.h>
int main ()
{
	int b=3;
	int a[]={10, 100, 200};
	int j, *d;
	d=a;

	for (j=0; j<b; j++)
	{
	printf("La dirección de la variable a[%d] es: %x\n", j, d);
	printf("El valor de la variable a[%d] es: %d\n", j, *d);
	d++;
	}
return 0;
}
