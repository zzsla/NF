#include <stdio.h>

int main(void)
{
	int apartment[15][15] = {};
	for(int i = 0; i < 15; i++)
	{
		for(int j = 1; j < 15; j++)
		{
			if(i == 0) apartment[0][j] = j;
			else if(j == 1) apartment[i][1] = 1;
			else
				apartment[i][j] = apartment[i][j-1] + apartment[i-1][j];
		}
	}
	int T;
	scanf("%i", &T);
	for(int i = 0; i < T; i++)
	{
		int k, n;
		scanf("%i %i", &k, &n);
		if(k < 1 || n < 1 || k > 14 || n > 14) return 1;
		printf("%i\n", apartment[k][n]);
	}

	return 0;
}
