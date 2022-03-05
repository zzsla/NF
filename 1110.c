#include <stdio.h>

int main(void)
{
	int N, n;
	int count = 0;
	int t, o;
	int tmp;
	int i = -1;
	scanf("%i",&N);
	if(!(0 <= N && N <= 99)) return 1;
	n = N;

	while(i != N)
	{
		t = n / 10;
		o = n % 10;
		i = 10 *o;
		tmp = t + o;
		o = tmp % 10;
		i += o;
		n =i;
		count++;
	}
	printf("%i", count);
	return 0;
}
