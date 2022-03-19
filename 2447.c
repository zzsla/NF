#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fractal(int x, int y, double k, char **arr, int n);

int main(void)
{
	double N, k;
	scanf("%lf", &N);
	for(k = 1; k <= 9; k++) //입력값 체크
	{
		if(k == 9) return 1;
		if(N == pow(3.0, k)) break;
	}
	char **arr; //그림판 생성
	arr = (char**) malloc (sizeof(char*) * N);
	for(int i = 0; i < N; i++)
		arr[i] = (char *)malloc (sizeof(char) * N);
	int x = 0, y = 0;
	int n = 0;
	fractal(x, y, k, arr, n);

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(arr[i][j] == 1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	for(int i = 0; i < N; i++)
		free(arr[i]);
	free(arr);


	return 0;
}

void fractal(int x, int y, double k, char **arr, int n)
{
	if(k == 0)
	{
		arr[x][y] = 1;
	}
	else
	{
		k--;
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0;j < 3; j++)
			{
				if(!(i == 1 && j == 1))
				{
					if(n == 0)
						fractal(x+i, y+j, k, arr, n++);
					else
						fractal(3*x+i, 3*y+j, k, arr, n++);
				}
			}
		}
	}
}
