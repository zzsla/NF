#include <stdio.h>

int main(void)
{
	int A, B, C;
	scanf("%i %i %i", &A, &B, &C);
	int revenue = 0;
	int i = 0;
	int break_even_point = 0;
	revenue = C - B;
	if(revenue < 0) printf("-1");
	else
	{
		break_even_point = (A / revenue) + 1;
		printf("%i", break_even_point);
	}
}
