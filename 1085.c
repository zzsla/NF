#include <stdio.h>

int main(void)
{
	int  w, h, tmp;
	int t[4] = {}; // 탈출할 수 있는 거리
	scanf("%i %i %i %i",&t[0], &t[1], &w, &h);

	t[2] = w - t[0];
	t[3] = h - t[1];
	tmp = t[0];
	for(int i = 1; i < 4; i++)
		if(tmp >= t[i]) tmp = t[i];

	printf("%i", tmp);

	return 0;
}

