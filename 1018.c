#include <stdio.h>

int check(int i,int j,char board[50][50],char ans1[8][8],char ans2[8][8]);

int main(void)
{
	char ans1[8][8]; //정답지1
	char ans2[8][8]; //정답지2
	for(int i = 0; i < 8; i++)
		for(int j = 0; j < 8; j++){
			if((i%2) == 0 && (j%2) == 1){
			   	ans1[i][j] = 'B';
			   	ans2[i][j] = 'W';
			}
			else if((i%2) == 1 && (j%2) == 0){
			   	ans1[i][j] = 'B';
			   	ans2[i][j] = 'W';
			}
			else{
			   	ans1[i][j] = 'W';
			   	ans2[i][j] = 'B';
			}
		}
	int N,M;
	scanf("%i %i", &N, &M);
	getchar();
	if(N < 8 || M < 8 || N > 50 || M > 50) return 1;
	char board[50][50] = {}; //함수 넣을 때 흐트러져서 바로 잡기 위해 50 넣음
	int result = 64; // 8*8
	int tmp;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++)
			scanf("%c", &board[i][j]);
		getchar(); // \n 넣기 위한 장치
	}
	for(int i = 0; i < (N - 7); i++)
		for(int j = 0; j < (M - 7); j++){
			tmp = check(i,j,board,ans1,ans2); //Brute force
			if(tmp < result) result = tmp;
		}
	printf("%i", result);

	return 0;
}

int check(int i,int j,char board[50][50],char ans1[8][8],char ans2[8][8])
{
	int aa = 0, ab = 0, count1 = 0, count2 = 0;
	for(int a = i;a < (8 + i); a++){
		ab = 0;
		for(int b = j;b < (8 + j); b++){
			if(ans1[aa][ab] != board[a][b]) count1++; //답지1 체크
			if(ans2[aa][ab] != board[a][b]) count2++; //답지2 체크
			ab++;
		}
		aa++;
	}
	if(count1 >= count2) return count2;
	else return count1;
}
