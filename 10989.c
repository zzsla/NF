#include <stdio.h>

int main(void) //counting sort
{
	int N;
	scanf("%i", &N);
	if(!(1 <= N && N <= 10000000)) return 1;
	int cntnum[10001] = {};
	int tmp;
	for(int i = 0; i < N; i++){
		scanf("%i", &tmp);
		cntnum[tmp]++;
	}
	for(int i = 0; i < 10001; i++)
		while(cntnum[i] != 0){
			printf("%i\n",i);
			cntnum[i]--;
		}

	return 0;
}
