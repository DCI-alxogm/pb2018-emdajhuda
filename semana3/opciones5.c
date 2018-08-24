#include <stdio.h>
int main()
{
	char a;
	int vmayus, vminus;

	printf("introduce una letra: ");
	scanf("%c", &a);

	vminus = (a == 'a'|| a == 'e'|| a == 'i'|| a == 'o'|| a == 'u');
	vminus = (a == 'A'|| a == 'E'|| a == 'I'|| a == 'O'|| a == 'U');

	if (vmayus || vminus)
{
	printf("%c es vocal \n", a);
}
	else
{
	printf("%c es consonante \n", a);
}
return 0;
}
