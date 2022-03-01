#include <stdio.h>

int main(void)
{
	int A;
	int B;
	int quotient;
	double remainder;

	scanf("%i %i", &A, &B);
	if(A <= 0 || B >= 10) return 1;

	quotient = A / B;
	remainder = A % B;
	remainder /= B;
	remainder += quotient;

	printf("%12.9f", remainder);

	return 0;
}
