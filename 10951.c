#include <stdio.h>

int main(void)
{
	int A,B;

	while(scanf("%i %i",&A, &B) != EOF)
	{
		printf("%i\n", A+B);
	}
	return 0;
}
