#include <stdio.h>
#include <math.h>

void tower_move(int start,int tmp,int destination, double N);

int main(void)
{
	double N;
	int n;
	scanf("%lf", &N);
	if(N < 1 || N > 20) return 1; //입력값 확인
	n = pow(2.0, N) - 1; //Mersenne prime
	printf("%i\n",n);
	int a = 1, b = 2, c = 3;
	tower_move(a, b, c, N);
	return 0;
}

void tower_move(int start,int tmp,int destination, double N)
{
	if(N == 1)
	{
		printf("%i %i\n",start, destination);
	}
	else
	{
		N--;
		tower_move(start,destination, tmp, N);
		printf("%i %i\n",start, destination);
		tower_move(tmp, start, destination, N);
	}
}
