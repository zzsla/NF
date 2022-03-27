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
	long x,y;
	long n[N];
	for(int i = 0; i < N; i++){
		scanf("%li %li", &x, &y);
		if(x > MAX || y > MAX || x < MIN || y < MIN) return 1;
		y = (y + 100000) * 200001;
		x = x + 100000 + y;
		n[i] = x;
	}
	qsort(n, sizeof(n)/sizeof(long), sizeof(long), compare);
	for(int i = 0; i < N; i++){
		y = n[i] / 200001 -100000;
		x = n[i] % 200001 -100000;
		printf("%li %li\n", x, y);
	}

	return 0;
}

int compare(const void *a, const void *b)
{
	long num1 = *(long *)a;
	long num2 = *(long *)b;

	if(num1 < num2) return -1;
	if(num1 > num2) return 1;
	return 0;
}
