#include <stdio.h>
int in_valve(int* n);

int main(void)
{
	int C;
	scanf("%i", &C);
	getchar();
	for(int i = 0; i < C; i++)
	{
		int n[1000] = {};
		int count = 0;
		float tmp = 0;
		float tmp2 = 0;
		int nu = 0;
		count = in_valve(n);
		for(int j = 1; j < count; j++)
			tmp +=n[j];
		tmp /= n[0];
		for(int j = 1; j < count; j++)
			if(tmp < n[j]) nu++;
		tmp2 = nu *100;
		tmp = tmp2 / n[0];
		printf("%6.3f\n", tmp);

	}
	return 0;
}

int in_valve(int* n)
{
	int i;
	for(i = 0; i < 1000; i++)
	{
		scanf("%i",&n[i]);
		if(getchar() == '\n') break;
	}
	return i;
}
