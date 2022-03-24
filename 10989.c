#include <stdio.h>
#include <stdlib.h>

int main(void) //counting sort
{
	int N;
	scanf("%i", &N);
	if(!(1 <= N && N <= 10000000)) return 1;
	int *n;
	n = (int *)malloc(sizeof(int *) * N);
	int *result;
	result = (int *)malloc(sizeof(int *) * N + 1);
	int cntnum[10000] = {};
	int tmp;
	for(int i = 0; i < N; i++)
		scanf("%i", &n[i]);
	for(int i = 0; i < N; i++){
		tmp = n[i];
		cntnum[tmp]++;
	}
	for(int i = 1; i < 10000; i++)
		cntnum[i] += cntnum[i-1];
	for(int i = N -1; i >= 0; i--){
		tmp = n[i];
		result[cntnum[tmp]] = tmp;
		cntnum[tmp]--;
	}
	for(int i = 1; i <= N; i++)
		printf("%i\n",result[i]);

	return 0;
}
