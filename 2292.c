#include <stdio.h>

int main(void)
{
	int N;
	int room = 1;
	int i = 0;
	scanf("%i",&N);
	if(!(1 <= N && N <= 1000000000)) return 1;

	while(room < N)
	{
		i++;
		room = room + (6 * i);
	}
	printf("%i", i + 1);

	return 0;
}
