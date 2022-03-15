#include <stdio.h>

int main(void)
{
	int X;
	int step = 0, check = 0;
	int tmp;
	scanf("%i", &X);
	if(!(1 <= X && X <= 10000000)) return 1;

	while(check < X)
	{
		step++;
		check += step;
	}
	check -= step;
	X -= check;
	tmp = step % 2;
	if(tmp == 0) printf("%i/%i",X,(step-X+1));
	else printf("%i/%i",(step-X+1), X);

	return 0;
}

	
