#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N;
	int **age;
	age = (int **)malloc(sizeof(int*) * 101);
	for(int i = 0; i < 101; i++){
		age[i] = (int *)malloc(sizeof(int) * 100000);
	}
	scanf("%i", &N);
	if(!(1 <= N && N <= 100000)) return 1;
	char name[N+1][101];
	int count[101] = {};
	int tmp = 0;
	for(int i = 1; i <= N; i++){
		scanf("%i %s", &tmp, name[i]);
		int j = 0;
		age[tmp][count[tmp]] = i;
		count[tmp]++;
	}
	for(int i = 0; i < 101; i++){
		int j = 0;
		while(age[i][j] != 0){
			tmp = age[i][j];
			printf("%i %s\n", i, name[tmp]);
			j++;
		}
	}
	for(int i = 0; i < 101; i++)
		free(age[i]);
	free(age);

	return 0;
}
