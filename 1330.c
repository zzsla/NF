#include <stdio.h>

int main(void)
{
	int A;
	int B;

	scanf("%i %i", &A, &B);

	if(-10000 > A || -10000 > B || 10000 < A || 10000 < B) return 1;

	if(A > B) printf(">");
	else if(A < B) printf("<");
	else printf("==");

	return 0;
}
