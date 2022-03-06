#include <stdio.h>

int main(void)
{
	int N[42] = {};
	int tmp;
	int count = 0;
	for(int i = 0; i < 10; i++)
	{
		scanf("%i", &tmp);
		if(!(0 <= tmp && tmp <= 1000)) return 1;
		tmp %= 42;
		N[tmp]++;
	}
	for(int i = 0; i < 42; i++)
		if(N[i] != 0) count++;
	printf("%i", count);
	return 0;
}
