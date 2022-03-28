#include <stdio.h>
#include <string.h>

int main(void)
{
	int N;
	scanf("%i", &N);
	if(!(1 <= N && N <= 100000)) return 1;
	int age[N];
	char name[N][101];
	int tmp;
	char tamp[101];
	for(int i = 0; i < N; i++)
		scanf("%i %s",&age[i], name[i]);
	for(int num = N - 1; num > 0; num--) // Bubble Sort
		for(int i = 0; i < num; i++){
			int j = i + 1;
			if(age[i] > age[j]){
				tmp = age[i];
				age[i] = age[j];
				age[j] = tmp;
				strcpy(tamp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], tamp);
			}
		}
	for(int i = 0; i < N; i++)
		printf("%i %s\n", age[i], name[i]);

	return 0;
}
