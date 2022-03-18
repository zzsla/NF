#include <stdio.h>

int main(void)
{
	int x[4] = {};
	int y[4] = {};

	for(int i = 0; i < 3; i++)
		scanf("%i %i", &x[i], &y[i]);
	x[3] = ((x[0] - x[1]) && (x[0] - x[2])) ? x[0] : x[1];
	y[3] = ((y[0] - y[1]) && (y[0] - y[2])) ? y[0] : y[1];

	printf("%i %i", x[3], y[3]);

	return 0;
}
