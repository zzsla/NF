#include <stdio.h>

int main(void)
{
	int A, B, C;
	int n[10] = {}; 
	int tmp , tmp2;
	scanf("%i %i %i", &A, &B, &C);
	if(A < 100 || B < 100 || C < 100 || A > 1000 || B > 1000 || C > 1000) return 1;
	tmp = A * B * C;
	
	while(tmp >= 1)
	{
		tmp2 = tmp % 10;
		tmp /= 10;
		n[tmp2]++;
	}
	for(int i= 0;i < 10; i++) printf("%i\n",n[i]);
	return 0;
}
