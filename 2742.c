#include <stdio.h>

int main(void)
{
	int N;
	int tmp;
	scanf("%i", &N);

	for(int i = 0; N > i;i++)
	{
		tmp = N - i;
		printf("%i\n", tmp);
	}
	return 0;
}
