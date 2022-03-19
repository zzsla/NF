#include <stdio.h>

int fibonacci(int a, int b, int n);

int main(void)
{
	int n, result;
	int a = 0, b = 1;
	scanf("%i", &n);
	if(!(0 <= n && n <= 20)) return 1;
	if(n == 0) result = a;
	else if(n == 1) result = b;
	else
		result = fibonacci(a,b,n);
	printf("%i", result);

	return 0;
}

int fibonacci(int a, int b, int n)
{
	int tmp;
	if(n == 2)
		return a + b;
	else
	{
		tmp = a + b;
		tmp= fibonacci(b, tmp, --n);
	}
	return tmp;
}
