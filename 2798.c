#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N, M;
	scanf("%i %i", &N, &M); //N:카드개수, M:숫자
	if(N < 3 || N > 100 || M < 10 || M > 300000) return 1; // 입력값이 오류
	int n[N]; //카드에 적힌 숫자
	for(int i = 0; i < N; i++)
	{
		scanf("%i", &n[i]);
		if(n[i] > 100000) return 1; //입력값이 오류
	}
	int a = 0, b = 0, c; //tmp
	for(int i = 0; i < N - 2; i++) //Brute force
		for(int j = i+1; j < N - 1; j++)
			for(int k = j+1; k < N; k++)
			{
				a = n[i] + n[j] + n[k];
				c = M - a;
				if(c < 0) break;
				if((M - a) < (M - b)) b = a;
			}
	printf("%i", b);

	return 0;
}
