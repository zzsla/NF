#include <stdio.h>

int main(void)
{
	int N[9];
	int *max;
	int maxn = 0;
	max = &N[0];
	for(int i = 0; i < 9; i++)
	{
		scanf("%i",&N[i]);
		if(N[i] >= 100) return 1;
		if(N[i] > *max)
		{
			max = &N[i];
			maxn = i;
		}
	}
	printf("%i\n%i", *max,maxn+1);
	return 0;
}
