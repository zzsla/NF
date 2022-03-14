#include <stdio.h>

int main(void)
{
	int T;
	scanf("%i", &T);
	if(!(1 <= T && T <= 1000)) return 1;
	for(int i = 0; i < T; i++)
	{
		char P[161] = {};
		int R = 0;
		scanf("%i", &R);
		if(!(1 <= R && R <= 8)) return 1;
		char tmp[20] = {};
		scanf("%s", tmp);
		int k = 0 , p = 0;
		while(tmp[k] != '\0')
		{
			for(int j = 0; j < R; j++)
			{
				P[p] = tmp[k];
				p++;
			}
			k++;
		}
		printf("%s\n",&P[0]);
	}
	return 0;
}
