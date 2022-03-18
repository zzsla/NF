#include <stdio.h>
int check(int n[4]);

int main(void)
{
	int x[4] = {};
	int y[4] = {};

	for(int i = 0; i < 3; i++)
		scanf("%i %i", &x[i], &y[i]);
	x[3] = check(x);
	y[3] = check(y);
	printf("%i %i", x[3], y[3]);

	return 0;
}

int check(int n[4])
{
	int a,b,c;
	a = n[0] - n[1];
	b = n[0] - n[2];
	c = n[1] - n[2];
	if(a && b) return n[0];
	else if(a && c) return n[1];
	else return n[2];
}
