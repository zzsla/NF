#include <stdio.h>

int main(void)
{
	int T; //테스트 케이스
	int A, B;
	scanf("%i", &T);
	int t[T];
	for(int i = 0; T > i; i++)
	{
		scanf("%i %i", &A, &B);
		t[i] = A + B;
	}
	for(int i = 0; T > i; i++) printf("Case #%i: %i\n",i+1, t[i]);

	return 0;
}
