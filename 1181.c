#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b);

int main(void)
{
	int N;
	scanf("%i", &N);
	if(!(1 <= N && N <= 20000)) return 1;
	getchar();
	char string[N][51];
	char result[N][51];
	int count[51] = {};
	count[0] = -1;
	char tmp[51] = {};
	for(int i = 0; i < N; i++){
		int j = 0, tmp = 0;
		while(1){
			tmp = getchar();
			if(tmp == '\n') break;
			string[i][j++] = tmp;
		}
		string[i][j] = '\0';
		count[j - 1]++;
	}
	for(int i = 0; i < 50; i++)
		count[i+1] += count[i];
	qsort(string, N, sizeof(char[51]), compare);
	for(int i = N -1; i >= 0; i--){
		int j = 0;
		while(string[i][j] != '\0'){
			j++;
		}
		strcpy(result[count[j-1]], string[i]);
		count[j-1]--;
	}
	for(int i = 0; i < N; i++){
		if(0 != strcmp(tmp, result[i]))
			printf("%s\n", result[i]);
		strcpy(tmp, result[i]);
	}

	return 0;
}

int compare(const void *a, const void *b)
{
	int num1 = *(char *)a;
	int num2 = *(char *)b;

	if(num1 > num2) return 1;
	if(num1 < num2) return -1;
	return 0;
}
