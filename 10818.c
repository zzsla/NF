#include <stdio.h>

int main(void)
{
	int N;
	scanf("%i", &N);
	if(N < 1 || N > 1000000) return 1;
	int n[N];
	int * max;
	int * min;
	max = &n[0];
	min = &n[0];
	for(int i = 0; i < N; i++) 
	{
		scanf("%i",&n[i]);
		if(n[i] < -1000000 || n[i] > 1000000) return 1;
		if(n[i] > * max) max = &n[i];
		if(n[i] < * min) min = &n[i];
	}
	printf("%i %i", *min, *max);
	return 0;
}
