#include <stdio.h>

typedef struct X
{
	int valve;
	unsigned int result;
}X;

int main(void)
{
	int N;
	scanf("%i", &N);
	if(!(1 <= N && N <= 1000000)) return 1;

	X n[N];
	for(int i = 0; i < N; i++){
		scanf("%i", &n[i].valve);
		n[i].result = 0;
	}
	for(int i = 0; i < N -1; i++)
		for(int j = i + 1; j < N; j++){
			if(n[i].valve > n[j].valve)
				n[i].result++;
			else if(n[i].valve < n[j].valve)
				n[j].result++;
		}

	for(int i = 0; i < N; i++)
		printf("%i ", n[i].result);

	return 0;
}
