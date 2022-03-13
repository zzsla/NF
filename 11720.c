#include <stdio.h>
int division(int n, int N);

int main(void)
{
	int N; //숫자의 갯수
	char n[101]; //입력 받은 수들
	int result = 0;
	scanf("%i", &N);
	if(!(1 <= N && N <= 100)) return 1;

	scanf("%s",n);
	for(int i = 0; i < N; i++)
	{
		result += (n[i] - 48);
	}
	printf("%i", result);
}
