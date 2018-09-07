#include <stdio.h>
#include <math.h>

int main ()

{
	int d, b, j=0, r;

	printf("Este programa transforma números decimales a números binarios \n");
	printf("Inserta el número decimal que deseas convertir a binario \n");
	scanf("%i", &d);
while (r!=0)
	{	
	b=d%(2^j);
	if (b==0)
		{
		printf("%i ", b);
		}
	else 
		{
		printf("1 ");
		}
	r=d;
	j++;
	}

return 0;
}




















































