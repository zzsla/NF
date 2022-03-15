#include <stdio.h>
#include <stdbool.h>
bool check(char w[101]);

int main(void)
{
	int N; //단어의 개수
	int result = 0;
	scanf("%i",&N);
	if(N > 100) return 1;// 오류값이 들어올 경우
	for(int i = 0; i < N; i++)
	{
		char word[101] = {};
		bool flag = 0;
		scanf("%s",word);
		flag = check(word); //그룹 단어인지 체크
		if(flag == 1) result++;
	}
	printf("%i", result);
	return 0;
}

bool check(char w[101])
{
	for(int i = 0; i < 101; i++)
	{
		if(w[1] == '\0') return 1;
		else if(w[i] == '\0') break;
		int j = i + 1;
		while(w[i] == w[j]) j++;
		while(w[j] != 0)
		{
			if(w[j] == w[i]) return 0;
			j++;
		}
	}
	return 1;
}
