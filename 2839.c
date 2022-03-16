#include <stdio.h>

int main(void)
{
	int N;
	int three[5] = {0,3,6,9,12};
	int check = 5, tmp = 5;
	scanf("%i", &N);
	if(!(3 <= N && N <= 5000)) return 1;
	if(N > 5)
	{
		int i = 1, j;
		while(tmp < N)
		{
			tmp = 5 * i;
			for(j = 0; j < 5;j++)
			{
				check = tmp + three[j];
				if(check == N)
				{
					printf("%i", i+j);
					return 0;
				}
			}
			i++;
		}
		tmp = N % 3;
		if(tmp != 0)
		{
			printf("-1");
			return 0;
		}
		tmp = N / 3;
		printf("%i", tmp);
	}
	else if(N == 3 || N == 5) printf("1");
	else printf("-1");

	return 0;
}
