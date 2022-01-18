#include <stdio.h>
#include <string.h>

int fibonacci(int n);

int main(void)
{
	unsigned int T; //테스트 케이스 개수

	scanf("%i", &T);
	int testcase[T][2];

	for(int t = 0;t < T;t++){
		unsigned int N;
		scanf("%i", &N);

		int zero = 0, one = 0;
		if(N > 41) return 1;  // 0 =< N =< 40 
		else{
			unsigned int zero, one;

			one = fibonacci(N);

			//printf("%i", one);
			zero = fibonacci(N-1);

			testcase[t][0] = zero;
			testcase[t][1] = one;
		}
	}
	for(int p = 0; p < T; p++){
		printf("%i %i\n",testcase[p][0], testcase[p][1]); //출력
	}
	return 0;
}


//피보나치 수열
int fibonacci(int n){
	if(n == -1){
		return 1;
	}else if (n == 0){
		return 0;
	}else if (n == 1){
		return 1;
	}else if (n == 2){
		return 1;
	}else{
		int a =  1, b = 1;
		for(int x = 2 ; x < n ; x++){
			if(a < b) a = a + b;
			else if(a > b ) b = a + b;
			else a = a + b;
		}
		if( a > b) return a;
		else return b;
	}
}

