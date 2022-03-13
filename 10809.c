#include <stdio.h>

int main(void)
{
	char S[100];
	char alphabet[26] = {};
	int i = 0;
	int tmp;
	scanf("%s", S);
	while(S[i] != '\0')
	{
		tmp = 0;
		tmp = S[i];
		tmp -= 97;
		if(alphabet[tmp] == 0) alphabet[tmp] = i+1;
		i++;
	}

	for(i = 0; i < 26; i++)
	{
		printf("%i ", alphabet[i]-1);
	}
	return 0;
}
