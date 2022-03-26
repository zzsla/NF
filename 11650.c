#include <stdio.h>
#include <stdlib.h>
#define MAX 100000
#define MIN -100000

int compare(const void *a, const void *b);

int main(void)
{
	int N;
	scanf("%i", &N);
	if(!(1 <= N && N <= MAX)) return 1;
	long n[N];
	long x = 0, y = 0;
	for(int i = 0; i < N; i++){
		scanf("%li %li", &x, &y);
		if(x < MIN || y < MIN || x > MAX || y > MAX) return 1;
		x += MAX;
	   	x *= 200000;
		y += MAX;
		x += y;
		n[i] = x;
	}
	qsort(n, sizeof(n)/sizeof(long), sizeof(long), compare);

	for(int i = 0; i < N; i++){
		x = n[i] / 200000;
		y = n[i] % 200000;
		x -= MAX;
		y -= MAX;
		printf("%li %li\n", x, y);
	}

	return 0;
}

int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if(num1 < num2) return -1;
	if(num1 > num2) return 1;
	return 0;
}
