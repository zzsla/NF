#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
//const float pi = 3.141593;

int main(void)
{
	int R;
	double area;
	scanf("%i", &R);
	if(R > 10000) return 1;

	area = M_PI * R * R;
	printf("%6f\n", area);
	area = 2 * R * R;
	printf("%6f\n", area);

	return 0;
}

