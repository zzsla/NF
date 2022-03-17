#include <stdio.h>

int main(void)
{
	int M, N;
	scanf("%i %i", &M, &N);
	int tmp;
	int result = 0, min;
	if(M == 1) M = 2;
	while(M <= N)
	{
		for(int i = 2; i < M; i++)
		{
			tmp = M % i;
			if(tmp == 0) break;
		}
		if(tmp != 0)
		{
			if(result == 0) min = M;
			result += M;
		}
		M++;
	}
	if(result == 0) printf("-1");
	else
		printf("%i\n%i", result, min);

	return 0;
}
