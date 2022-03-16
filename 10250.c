#include <stdio.h>
void find_room(int H, int W, int N);

int main(void)
{
	int T; //테스트 케이스 수
	scanf("%i", &T);

	for(int i = 0; i < T; i++)
	{
		int H, W, N;
		scanf("%i %i %i", &H, &W, &N);
		if(H < 1 || W < 1 || N < 1 || H > 99 || W > 99 || N>(H*W)) return 1;

		find_room(H, W, N);
	}
	return 0;
}

void find_room(int H, int W, int N)
{
	int count = 0;
	int i, j;
	int division, remainder;
	for(i = 1; i <= W; i++)
	{
		for(j = 1; j <= H; j++)
		{
			count++;
			if(count == N) break;
		}
		if(count == N) break;
	}
	division = i / 10;
	remainder = i % 10;
	printf("%i%i%i", j, division, remainder);
}
