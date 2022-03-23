#include <stdio.h>

int main(void)
{
	int N;
	scanf("%i", &N);
	if(!(1 <= N && N <= 1000)) return 1;
	int n[N];
	int tmp;
	for(int i = 0; i < N; i++){
		scanf("%i", &n[i]);
	}
	for(int i = 0;i < N - 1;i++)
		for(int j = i + 1; j < N; j++){
			if(n[i] > n[j]){
				tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}
		}
	for(int i = 0; i < N; i++)
		printf("%i\n", n[i]);

	return 0;
}
