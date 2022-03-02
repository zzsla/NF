#include <stdio.h>

int main(void)
{
	int val1;
	int val2;
	int tmp;
	
	int o;
	int t;
	int h;

	scanf("%i %i", &val1, &val2);

	h = val2 / 100;
	tmp = val2 % 100;
	t = tmp / 10;
	o = tmp % 10;

	o *= val1;
	t *= val1;
	h *= val1;

	printf("%i\n",o);
	printf("%i\n",t);
	printf("%i\n",h);

	tmp = o + t*10 + h *100;

	printf("%i\n",tmp);

	return 0;
}
