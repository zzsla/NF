#include <stdio.h>

int main(void)
{
	int C;
	scanf("%i", &C);
	for(int i = 0; i < C; i++)
	{
		int a;
		scanf("%i", &a);
		int n[1000] = {};
		for(int b = 0; b < a; b++) scanf("%i", &n[b]);
		int count = 0;
		float tmp = 0;
		float tmp2 = 0;
		int nu = 0;
		count = a;
		for(int j = 0; j < count; j++)
			tmp += n[j];
		tmp /= a;
		for(int j = 0; j < count; j++)
			if(tmp < n[j]) nu++;
		tmp2 = nu *100;
		tmp = tmp2 / a;
		printf("%0.3f%%", tmp);
		printf("\n");

	}
	return 0;
}
