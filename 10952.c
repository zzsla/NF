#include<stdio.h>

int main(void)
{
	int A, B;
	while(scanf("%i %i", &A, &B), A && B)
		printf("%i\n", A + B);
	return 0;
}	
