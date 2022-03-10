#include <stdio.h>
int valve(int tmp);

int main(void)
{
	int n = 1;
	int N[10000] = {};
	int tmp = 0;
	for(int i = 0; i <= 10000; i++)
	{
		if(N[i] == 0)
		{
			printf("%i\n",i+1);
			for(int j = i; j <= 10000; )
			{
				tmp = j + 1;
				tmp = valve(tmp);
	//			printf("%i ",tmp);
				N[--tmp] = 1;
				j = tmp;
			}
		}
		tmp = 0;
	}
	return 0;
}

int valve(int tmp)
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	int point = 0;
	a = tmp / 10000;
	point = tmp % 10000;
	b = point / 1000;
	point %= 1000;
	c = point / 100;
	point %= 100;
	d = point / 10;
	e = point % 10;
	tmp = tmp + a + b + c + d + e;
	return tmp;
}
