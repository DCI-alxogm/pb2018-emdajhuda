#include <stdio.h>
#include <math.h>

int main ()

{

	float re;
	int n=5, x;

for (x=0; x<n; x++)
{
	re=exp(x);
	printf("%i \t %f \n", x, re);
}
return 0;
}
