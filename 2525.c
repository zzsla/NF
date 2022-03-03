#include <stdio.h>

int main(void)
{
	int A, B, C;
	int tmp;

	scanf("%i %i", &A, &B);
	if(!(0 <= A && A <= 23 && 0 <= B && B <= 59)) return 1;
	scanf("%i", &C);
	if(!(0 <= C && C <= 1000)) return 1;

	B += C;
	tmp = B / 60;
	B %= 60;
	A += tmp;
	if(A > 23) A -= 24;

	printf("%i %i", A, B);
	return 0;
}
