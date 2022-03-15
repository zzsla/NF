#include <stdio.h>

int main(void)
{
	int A, B, V;
	scanf("%i %i %i", &A, &B, &V);
	if(A < 1 || B < 1 || V < 1 || A > 1000000000 || B > 1000000000 || V > 1000000000) return 1;
	if(A >= V) printf("1");
	else
	{
		int us = A - B;
		int day, remainder;
		V -= A;
		day = V / us;
		remainder = V % us;
		if(remainder != 0) printf("%i", day + 2);
		else printf("%i",day+1);
	}

	return 0;
}
		
