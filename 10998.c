#include <stdio.h>

int main(void)
{
	int A;
	int B;
	int ans;

	scanf("%i %i",&A,&B);
	if(A <= 0 || B >= 10) return 1;

	ans = A * B;
	printf("%i", ans);
	return 0;
}
