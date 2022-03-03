#include <stdio.h>

int main(void)
{
	int A, B, C; //주사위
	int prize_money;

	scanf("%i %i %i", &A, &B, &C);

	if(A == B && B == C) prize_money = 10000 + A * 1000;
	else if(A == B || B == C) prize_money = 1000 + B * 100;
	else if(C == A) prize_money = 1000 + A * 100;
	else
	{
		if(A > B && A > C) prize_money = A * 100;
		else if(B > A && B > C) prize_money = B * 100;
		else prize_money = C * 100;
	}

	printf("%i", prize_money);

	return 0;
}
