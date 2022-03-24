#include <stdio.h>
#include <stdlib.h>

int main(void) //counting sort
{
	int N;
	scanf("%i", &N);
	if(!(1 <= N && N <= 10000000)) return 1;
	int *n;
	n = (int *)malloc(sizeof(int *) * N + 1);
	int *cntnum;
	cntnum = (int *)malloc(sizeof(int *) * 10000);
	int tmp, tmp2;
	for(int i = 0; i < N; i++)
		scanf("%i", &n[i]);
	for(int i = 0; i < N; i++){
		tmp = n[i];
		cntnum[tmp]++;
	}
	cntnum[1] += -1;
	for(int i = 1; i < 10000; i++)
		cntnum[i] += cntnum[i-1];
	int i = N - 1;
	tmp = n[cntnum[n[0]]];
	n[cntnum[n[0]]] = n[0];
	cntnum[n[0]]--;
	while(i != 0){
		tmp2 = n[cntnum[tmp]];
		n[cntnum[tmp]] = tmp;
		cntnum[tmp]--;
		i--;
		tmp = tmp2;
	}
	for(int i = 0; i < N; i++)
		printf("%i\n",n[i]);

	return 0;
}
