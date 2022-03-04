#include <stdio.h>

int main(void)
{
	int T; // 테이스 케이스
	scanf("%i", &T);
	int t[T][3]; // 0 = A, 1 = B, 2 = result
	for(int i = 0; i < T; i++)
	{
		scanf("%i %i", &t[i][0], &t[i][1]);
		t[i][2] = t[i][0] + t[i][1];
	}
	for(int i = 0; i < T; i++) printf("Case #%i: %i + %i = %i\n",i+1, t[i][0], t[i][1], t[i][2]);

	return 0;
}
