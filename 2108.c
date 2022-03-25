#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b);

int main(void)
{
	int N;
	scanf("%i",&N);
	if(!(1 <= N && N <= 500000 && N%2 == 1)) return 1;
	int n[N];
	int tmp; //임시저장소
	double arithmetic_mean = 0; //산술평균
	int arithmetic;
	int median; //중앙값
	int mode[8001] = {}; //최빈값
	int range; //범위
	int ma = 0, flag = 0, mr;
	for(int i = 0; i < N; i++){
		scanf("%i", &tmp);
		if(abs(tmp) > 4000) return 1;
		n[i] = tmp;
		arithmetic_mean += tmp;
		tmp += 4000;
		mode[tmp]++;
	}
	qsort(n,sizeof(n)/sizeof(int),sizeof(int),compare);
	median = n[N/2];
	range = n[N-1] - n[0];
	for(int i = 0; i < 8001; i++){
		if(ma < mode[i]){
		   	ma = mode[i];
			flag = 1;
			mr = i;
		}
		else if(ma == mode[i] && flag == 1){
			flag = 0;
			mr = i;
		}
	}
	arithmetic_mean /= N;
	arithmetic_mean += 0.5;
	arithmetic = floor(arithmetic_mean);
	printf("%i\n",arithmetic);
	printf("%i\n",median);
	printf("%i\n", mr - 4000);
	printf("%i", range);

	return 0;
}

int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if(num1 < num2)
		return -1;
	if(num1 > num2)
		return 1;
	return 0;
}
