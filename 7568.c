#include <stdio.h>

int main(void)
{
	int N;
	scanf("%i", &N);
	if(!(2 <= N && N <= 50)) return 1;

	int weight[50] = {};
	int height[50] = {};
	int result[50] = {};
	for(int i = 0; i < N; i++)
		scanf("%i %i",&weight[i], &height[i]);

	for(int i = 0; i < N - 1; i++)
		for(int j = i + 1; j < N; j++)
			if(weight[i] > weight[j] && height[i] > height[j])
				result[j]++;
			else if(weight[i] < weight[j] && height[i] < height[j])
				result[i]++;

	for(int i = 0; i < N; i++)
		printf("%i ", result[i] + 1);

	return 0;
}
