#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char prime_number[10000] = {};
	char *arr;
	arr = (char *)malloc(sizeof(char) * 10000);
	arr[0] = 1;
	arr[1] = 1;
	for(int i = 2; i < 10001;)
	{
		int j = 2;
		while((i*j) < 10001)
		{
			arr[i*j] = 1;
			j++;
		}
		i++;
		while(arr[i] == 1) i++;
	}

	int T;
	scanf("%i", &T);
	for(int i = 0; i < T; i++)
	{
		int n, a, b, tmp; // 숫자들
		scanf("%i", &n);
		if(!(4 <= n && n <= 10000)) return 1;
		a = n / 2;
		b = n - a;
		while((arr[a] == 1) || (arr[b] == 1))
		{
			a--;
			b = n - a;
		}
		printf("%i %i\n",a, b);
	}

	free(arr);
	return 0;
}
