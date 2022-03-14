#include <stdio.h>

int main(void)
{
	char str[1000001];
	int ch;
	int i = 0;
	int count = 0;
	ch = getchar();
	while((ch != '\n') && (i <= 1000000))
	{
		str[i] = ch;
		if((ch == ' ') && (i != 0)) count++; 
		i++;
		ch = getchar();
	}
	str[i] = '\0';
	if(str[i - 1] != ' ') count++;
	printf("%i",count);
	return 0;
}
