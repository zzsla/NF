#include<stdio.h>

int main(void)
{
	int x;
	int y;

	scanf("%i",&y);
	if(!(1000 <= y && y <= 3000)) return 1;

	x = y - 543;

	printf("%i", x);
	return 0;
}
