#include <stdio.h>
#include <stdbool.h>

void backtracking(int N, int M, int cnt, bool flag[N+1], int valve[M]);

int main(void)
{
	int N, M; //N : 범위, M: 개수
	scanf("%i %i", &N, &M);
	if(!(1 <= M && M <= N && N <= 8)) return 1;
	bool flag[N+1];
	int valve[M];
	int cnt = 1;
	for(int i = 0; i <= N; i++) flag[i] = 0;
	backtracking(N, M, cnt, flag, valve);
	return 0;
}

void backtracking(int N, int M, int cnt, bool flag[N+1], int valve[M])
{
	for(int i = 1; i <= N; i++){
		if(cnt == M){
			if(flag[i] != 1){ //backtracking
				valve[cnt-1] = i;
				for(int j = 0; j < M; j++) printf("%i ",valve[j]);
				printf("\n");
			}
		}
		else{
			if(flag[i] != 1){ //backtracking
				valve[cnt-1] = i;
				flag[i] = 1;
				cnt++;
				backtracking(N, M, cnt, flag, valve);
				cnt--;
				flag[i] = 0;
			}
		}
	}
}
