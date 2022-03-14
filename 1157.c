#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	char a[1000001] = {};
	int alphabet[26] = {};
	scanf("%s", a);
	int i = 0;
	int tmp = 0;
	bool flag = 0;
   	char check = 0;
	while(a[i] != '\0')
	{
		tmp = a[i];
		if('A' <= tmp && tmp <= 'Z') alphabet[tmp-'A'] += 1;
		else if('a' <= tmp && tmp <= 'z') alphabet[tmp-'a'] += 1;
		i++;
	}
	tmp = 0;
	for(char j = 0; j < 26; j++)
	{
		if(alphabet[j] > tmp)
		{
			check = j;
			tmp = alphabet[j];
			flag = 0;
		}
		else if(alphabet[j] == tmp)
		{
			flag = 1;
		}
	}
	if(flag == 1) printf("?");
	else if(flag == 0)
	{
		check += 65;
		printf("%c", check);
	}
	return 0;
}
