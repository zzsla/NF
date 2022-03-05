#include <stdio.h>

int main(void)
{
	int N;
	scanf("%i", &N);
	if(N < 1 || N > 1000000) return 1;
	int n[N];
	int tmp;
	for(int i = 0; i < N; i++) 
	{
		scanf("%i",&n[i]);
		if(n[i] < -1000000 || n[i] > 1000000) return 1;
	}
	int N2 = N;
	while(N2 != 0)
	{
		int i = 0;
		while(i < N2 - 1)
		{
			int j = i + 1;
			if(n[i] > n[j])
			{
				tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}
			i++;
		}
	N2--;
	}
	printf("%i %i",n[0], n[N-1]);
	return 0;
}
