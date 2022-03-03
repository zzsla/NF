#include <stdio.h>

void quadrant_n(int x, int y);

int main(void)
{
	int x;
	int y;

	scanf("%i", &x);
	if(!(-1000 <= x && x <= 1000)) return 1;
	scanf("%i", &y);
	if(!(-1000 <= y && y <= 1000)) return 1;

	quadrant_n(x,y);

	return 0;
}

void quadrant_n(int x, int y)
{
	if(x > 0 && y > 0) printf("1");  //Quadrant 1
	else if(x < 0 && y > 0) printf("2"); // Quadrant 2
	else if(x < 0 && y < 0) printf("3"); // Quadrant 3
	else printf("4"); // Quadrant 4
}
