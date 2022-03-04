#include <stdio.h>

int main(void)
{
	int n;
	int tmp = 0;

	scanf("%i", &n);
	if(!(1 <= n && n <= 10000)) return 1;

	for(int i = 1; i <= n; i++) tmp += i;

	printf("%i", tmp);
}
