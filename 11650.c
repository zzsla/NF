#include <stdio.h>
#define MAX 100000
#define MIN -100000

void change(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int N;
	scanf("%i", &N);
	if(!(1 <= N && N <= MAX)) return 1;
	int n[N][2]; // 0: x, 1: y
	for(int i = 0; i < N; i++){
		scanf("%i %i", &n[i][0], &n[i][1]);
		if(n[i][0] < MIN || n[i][1] < MIN || n[i][0] > MAX || n[i][1] > MAX)
			return 1;
	}
	int *tmp;
	for(int i = 0; i < N - 1; i++)
		for(int j = i + 1; j < N; j++){
			if(n[i][0] > n[j][0]){
				change(&n[i][0], &n[j][0]);
				change(&n[i][1], &n[j][1]);
			}
			else if(n[i][0] == n[j][0])
				if(n[i][1] > n[j][1]){
					change(&n[i][0], &n[j][0]);
					change(&n[i][1], &n[j][1]);
			}
		}
	for(int i = 0; i < N; i++)
		printf("%i %i\n", n[i][0], n[i][1]);

	return 0;
}
