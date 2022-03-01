#include <stdio.h>

int main(void)
{
	int A;
	int B;
	int tmp;

	scanf("%i %i", &A, &B);
	if(A < 1 || B > 10000) return 1;
	tmp = A + B;
	printf("%i\n",tmp);
	tmp = A - B;
	printf("%i\n",tmp);
	tmp = A * B;
	printf("%i\n",tmp);
	tmp = A / B;
	printf("%i\n",tmp);
	tmp = A % B;
	printf("%i\n",tmp);

	return 0;
}
