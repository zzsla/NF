#include <stdio.h>
int hanN(int N);

int main(void)
{
	int N;
	int total = 0;
	scanf("%i", &N);
	for(int i = 0; i < N; i++)
	{
	   total += hanN(i+1);
	}
	printf("%i",total);
}

int hanN(int N)
{
	if((N/100) == 0) return 1;
	int o = 0, t = 0, h = 0;
	int  tmp = 0;
	int a,b; //비교수
	h = N / 100;
	tmp = N % 100;
	t = tmp / 10;
	o = tmp % 10;
	a = o - t;
	b = t - h;
	if(a == b) return 1;
	else return 0;
}
