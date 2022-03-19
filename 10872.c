#include <stdio.h>

int factorial(int n);

int main(void)
{
	int N, result;
	scanf("%i", &N);
	if(!(0 <= N && N <= 12)) return 1;

	if(N == 0)result = 1;
	else
		result = factorial(N);
	printf("%i",result);

	return 0;
}

int factorial(int n)
{
	int tmp, t;
	if(n == 1)
		return n;
	else
	{
		tmp = n;
		tmp *= factorial(--n);
	}
	return tmp;
}
