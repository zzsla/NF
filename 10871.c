#include <stdio.h>

int main(void)
{
	int N, X;

	scanf("%i %i", &N, &X);
	if(!(1 <= N && 1 <= X && N <= 10000 && X <= 10000)) return 1;
	int A[N];
	for(int i = 0; N > i; i++) scanf("%i",&A[i]);
	for(int i = 0; N > i; i++) if(A[i] < X) printf("%i ", A[i]);
	return 0;
}
