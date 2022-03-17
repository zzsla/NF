#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char arr[1000] = {}; // 소수인지 아닌지 구별해 놓은 배열
	char* n;
	n = (char *)malloc(sizeof(char) * 1000);
	n[0] = 1;
	n[1] = 1;
	for(int i = 2; i < 1001; i++)
	{
		int j = 2;
		while((i*j) < 1001)
		{
			n[i*j] = 1;
			j++;
		}
		i++;
		if(n[i] == 1)
			while(n[i] != 0) i++;
	}
	int N;
	int m[100] = {};
	int tmp;
	int count = 0;
	scanf("%i", &N);
	if(N > 100) return 1;
	for(int i = 0; i < N; i++) scanf("%i", &m[i]);
	for(int i = 0; i < N; i++) 
	{
		tmp = m[i];
		if(n[tmp] == 0) count++;
	}
	free(n);
	printf("%i", count);
	
	return 0;
}
