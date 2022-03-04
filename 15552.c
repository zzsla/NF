#include <stdio.h>

int main(void)
{
	int T; //테스트 케이스
	int A,B;

	scanf("%i", &T);
	int t[T];
	for(int i = 0; i < T; i++)
	{
		scanf("%i %i", &A, &B);
		t[i] = A + B;
	}
	for(int i = 0; i < T; i++) printf("%i\n", t[i]);

	return 0;
}
