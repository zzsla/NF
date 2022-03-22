#include <stdio.h>

int check(int i);

int main(void)
{
	int N;
	scanf("%i", &N);
	if(N > 10000) return 1;
	int i = 666, count = 0;

	while(N != count){
		count += check(i);
		i++;
	}
	printf("%i", i - 1);

	return 0;
}

int check(int i)
{
	int div, rem, count = 0;
	while(i != 0){
		div =  i / 10;
		rem =  i % 10;
		if(rem == 6) count++;
		else count = 0;
		i = div;
		if(count == 3) break;
	}
	
	if(count == 3) return 1;
	else return 0;
}

