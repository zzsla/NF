#include <stdio.h>

int main(void)
{
	char word[16] = {};
	scanf("%s", word);
	int tmp;
	int result = 0;

	for(int i = 0; i < 16; i++)
	{
		tmp = 0;
		if('A' <= word[i] && word[i] <= 'C') tmp = 3;
		else if('D' <= word[i] && word[i] <= 'F') tmp = 4;
		else if('G' <= word[i] && word[i] <= 'I') tmp = 5;
		else if('J' <= word[i] && word[i] <= 'L') tmp = 6;
		else if('M' <= word[i] && word[i] <= 'O') tmp = 7;
		else if('P' <= word[i] && word[i] <= 'S') tmp = 8;
		else if('T' <= word[i] && word[i] <= 'V') tmp = 9;
		else if('W' <= word[i] && word[i] <= 'Z') tmp = 10;

		result += tmp;
	}
	printf("%i",result);
	
	return 0;
}
		
