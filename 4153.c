#include <stdio.h>

int main(void)
{
	int n[3];
	int tmp;
	for(int i = 0; i < 30000; i++)
	{
		scanf("%i %i %i",&n[0], &n[1], &n[2]);
		if(n[0] == 0 && n[1] == 0 && n[2] == 0) break;

		for(int j = 0; j < 2; j++)
			for(int k =j + 1; k < 3; k++)
				if(n[j] > n[k])
				{
					tmp = n[k];
					n[k] = n[j];
					n[j] = tmp;
				}
		int a = n[0], b = n[1], c = n[2];
		if((a*a) + (b*b) == (c*c)) printf("right\n");
		else printf("wrong\n");
	}

	return 0;
}
