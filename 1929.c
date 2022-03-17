#include <stdio.h>

int main(void)
{
	int M, N;
	scanf("%i %i", &M, &N);
	if(M < 1 || N < 1 || M > 1000000 || N > 1000000) return 1;
	if(M == 1) M = 2;
	int div, rem, tmp;
	for(int i = M; i <= N; i++)
	{
		int j;
		for(j = 2; j < i; j++)
		{
			rem = i % j;
			if(rem == 0) break;
		}
		if(j == i) printf("%i\n",i);
	}

	return 0;
}
