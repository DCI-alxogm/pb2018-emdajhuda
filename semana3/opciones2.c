#include <stdio.h>

int main()
{
int a;

	printf("Introduce un número \n");
	scanf("%i", &a);
	
	if(a%2==0)
{
	printf("%i es un número par \n", a);
}
	else
{
	printf("%i es un número impar \n", a);
}
return 0;
}
