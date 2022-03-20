#include <stdio.h>
#include <stdlib.h>

int check(int N, int count, int tmp);

int main(void)
{
	char n[8];
	scanf("%s", n);
	int N;
	int count = 0;
	N = atoi(n);
	if(!(1 <= N && N <= 1000000)) return 1;
	while(n[count] != '\0') count++;
	int tmp = 0, i;
	if(0 < N && N < 20){
		for(i = 1; i <= N; i++){
			tmp = 0;
			tmp += check(i, count, tmp);
			tmp += i;
			if(tmp == N) break;
			if(i == N) tmp = 0;
		}
	}
	else{
		for(i = N - (9 * count); i <= N; i++){
			tmp = 0;
			tmp += check(i, count, tmp);
			tmp += i;
			if(tmp == N) break;
			if(i == N) tmp = 0;
		}
	}
	if(tmp == 0) printf("0");
	else printf("%i", i);

	return 0;
}

int check(int N, int count, int tmp)
{
	int div, rem;
	if(count == 1)
	{
		tmp += N;
	}
	else if(count == 2){
		div = N / 10;
		rem = N % 10;
		tmp += div;
		tmp += rem;
		return tmp;
	}
	else{
		div = N / 10;
		rem = N % 10;
		tmp += check(div, --count,tmp);
		tmp += rem;
	}
	return tmp;
}
