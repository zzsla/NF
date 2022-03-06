#include <stdio.h>

int main(void)
{
	int N;
	scanf("%i", &N);
	if(1000 < N) return 1;
	int n[N];
	int high_score = 0;
	float tmp = 0;
	float new_average = 0;
	for(int i = 0; i < N; i++)
	{
		scanf("%i", &n[i]);
		if(!(0 <= n[i] && n[i] <= 100)) return 1;
		if(high_score < n[i]) high_score = n[i];
	}
	for(int i = 0; i < N; i++)
	{
		tmp = n[i];
		tmp = tmp / high_score * 100;
		new_average += tmp;
	}
	new_average = new_average / N;
	printf("%5.2f",new_average);

	return 0;
}
