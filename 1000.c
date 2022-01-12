#include <stdio.h>

int main(void)
{
	int a;
	int b;

	scanf("%i %i", &a, &b);
	if(a<=0)
	{
		return 1;
	}
	else if(b>=10)
	{
		return 1;
	}
	else
	{
	printf("%i \n", a+b);

	return 0;
	}
}

