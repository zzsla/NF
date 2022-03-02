#include <stdio.h>

int main(void)
{
	int A;
	int B;
	int C;
	int tmp;

	scanf("%i %i %i", &A, &B, &C);
	if(A < 2 || B < 2 || C < 2 || A > 10000 || B > 10000 || C > 10000) return 1;

	tmp = (A+B)%C;
	printf("%i\n", tmp);
	tmp = ((A%C)+(B%C))%C;
	printf("%i\n", tmp);
	tmp = (A*B)%C;
	printf("%i\n", tmp);
	tmp = ((A%C)*(B%C))%C;
	printf("%i\n", tmp);

	return 0;
}
