#include <stdio.h>

int main()
{
int a;

	printf("Introduce un número \n");
	scanf("%i", &a);

	if(a%2==0)
{
	a=a+1;
	printf("%i \n", a);
}
return 0;
}
