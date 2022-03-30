#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;
	if(num1 > num2) return 1;
	if(num1 < num2) return -1;
	return 0;
}
int main(void)
{
	int N;
	scanf("%i", &N);
	if(!(1 <= N && N <= 1000000)) return 1;
	int n[N];
	unsigned int check[N];
	int result[2000000001];
	unsigned int lastnum = 2000000001;
	int count = 1;
	for(int i = 0; i < N; i++){
		scanf("%i", &n[i]);
		check[i] = n[i] + 1000000000;
	}
	qsort(check, sizeof(check)/sizeof(int), sizeof(int), compare);
	for(int i = 0; i < N; i++)
		if(!(lastnum == check[i])){
			result[check[i]] = count;
			count++;
			lastnum = check[i];
		}

	for(int i = 0; i < N; i++)
		printf("%i ", result[n[i]+1000000000] - 1);

	return 0;
}
