#include <stdio.h>

int main(void)
{
	int N;
	scanf("%i", &N);
	if(!(1 <= N && N <= 10000000)) return 1;
	int tmp, div, rem;

	if(N == 1) return 0;
	else if(N == 2) printf("2");
	else
	{
		for(int i = 2; i <= N; i++)
		{
			rem = N % i;
			while(rem == 0)
			{
				printf("%i\n", i);
				N /= i;
				rem = N % i;
				if(i == N) break;
			}
			if(i == N) printf("%i\n", i);
		}
	}

	return 0;
}

