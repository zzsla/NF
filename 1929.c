#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char n[1000000] = {};
	char *arr;
	arr = (char *)malloc(sizeof(char) * 1000000);
	arr[0] = 1;
	arr[1] = 1;
	for(int i = 2; i < 1000001; )
	{
		int j = 2;
		while((i*j) < 1000001)
		{
			arr[i*j] = 1;
			j++;
		}
		i++;
		if(arr[i] == 1)
			while(arr[i] != 0)i++;
	}
	int M, N;
	scanf("%i %i", &M, &N);
	if(M < 1 || N < 1 || M > 1000000 || N > 1000000) return 1;
	
	while(M <= N)
	{
		if(arr[M] == 0) printf("%i\n", M);
		M++;
	}
	free(arr);

	return 0;
}
