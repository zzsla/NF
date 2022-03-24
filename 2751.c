#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if(num1 < num2)
		return -1;
	if(num1 > num2)
		return 1;

	return 0;
}

int main(void)
{
	int N;
	scanf("%i", &N);
	if(!(1 <= N && N <= 1000000)) return 1;
	int n[N];
	for(int i = 0; i < N; i++)
		scanf("%i", &n[i]);
	qsort(n, sizeof(n)/sizeof(int), sizeof(int), compare);
	for(int i = 0; i < N; i++)
		printf("%i\n",n[i]);

	return 0;
}
