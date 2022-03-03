#include <stdio.h>

int main(void)
{
	int H; //hour
	int M; //minute

	scanf("%i %i", &H, &M);
	if(!(0 <= H && H <= 23 && 0 <= M <= 59)) return 1;

	if(M < 45)
	{
		M += 15;
		if(H == 0) H = 23;
		else H -= 1;
	}
	else M -= 45;

	printf("%i %i", H, M);

	return 0;
}
