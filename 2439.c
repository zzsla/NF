#include <stdio.h>

int main(void)
{
	int N;
	int space;

	scanf("%i", &N);
	if(!(1 <= N && N <= 100)) return 1;

	for(int i = 1; N >= i; i++)
	{
		space = N - i;
		for(int j = 0; space > j; j++) printf(" ");
		for(int j = 0; i > j; j++) printf("*");
		printf("\n");
	}
	return 0;
}
