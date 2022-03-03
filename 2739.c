#include <stdio.h>

int main(void)
{
	int N;
	int tmp;

	scanf("%i",&N);

	for(int i = 1; i <= 9 ; i++)
	{
		tmp = N * i;
		printf("%i * %i = %i\n", N, i, tmp);
	}

	return 0;
}
