#include <stdio.h>
int cipher(char N[10001]);
void plus(char B[10001], char S[10001], int b, int s);

int main(void)
{
	char tmp[10001] = {};
	char tmp2[10001] = {};
	int result[10002] = {};
	scanf("%s %s",tmp, tmp2);
	int a, b, i, tmp3, div, rem;
	a = cipher(tmp);
	b = cipher(tmp2);
//	printf("%i %i", a, b);
	if(b <= a) i = 1;
	else i = 2;
	if(i == 1) plus(tmp,tmp2,a,b);
	else plus(tmp2, tmp, b, a);
	return 0;
}

void plus(char B[10001], char S[10001], int b, int s)
{
	int tmp = 0, div, rem, j = -1;
	int result[10002] = {};
	b--;
	s--;
	for(int i = b; i >= 0; i--)
	{
		tmp += (B[i] - 48);
		if(s >= 0) tmp += (S[s] - 48);	
		s--;
		div = tmp / 10;
		rem = tmp % 10;
		tmp = div;
		result[++j] = rem;
	}
	if(tmp > 0) 
	{
		j++;
		result[j] = tmp;
	}
	for(int i = j; j >= 0; j--) printf("%i", result[j]);
}

int cipher(char N[10001])
{
	int i = 0;
	while(N[i] != '\0') i++;
	return i;
}
