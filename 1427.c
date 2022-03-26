#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char N[11] = {};
	scanf("%s", N);
	int tmp;
	for(int i = 0; i < 10; i++)
		for(int j = i+1; j < 11; j++)
			if(N[i] < N[j]){
				tmp = N[i];
				N[i] = N[j];
				N[j] = tmp;
			}

	printf("%s", N);
	return 0;
}
