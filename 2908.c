#include <stdio.h>
#include <stdlib.h>
int change(char N[3]);

int main(void)
{
	char A[4]; 
	char B[4];
	int a, b;
	a = change(A);
	getchar();
	b = change(B);
	if(a > b) printf("%i", a);
	else printf("%i", b);
	return 0;
}

int change(char N[4])
{
	int tmp = 0;
	for(int i = 2; i >= 0; i--)
		scanf("%c", &N[i]);
	N[3] = '\0';
	tmp = atoi(N);
	return tmp;
}
