#include <stdio.h>
int check (char w[101]);

int main(void)
{
	char words[101] = {};
	scanf("%s", words);
	int result;

	result = check(words);

	printf("%i", result);
	return 0;
}

int check (char w[101])
{
	int count = 0;
	for(int i = 0; i < 101; i++)
	{
		if(w[i] == '\0') break;
		if(w[i] == 'd')
		{
			if(w[i+1] == 'z' && w[i+2] == '=') i += 2;
			else if(w[i+1] == '-') i++;
		}
		else if(w[i] == 'c')
		{
			if(w[i+1] == '=') i++;
			else if(w[i+1] == '-') i++;
		}
		else if(w[i] == 'l' && w[i+1] == 'j') i++;
		else if(w[i] == 'n' && w[i+1] == 'j') i++;
		else if(w[i] == 's' && w[i+1] == '=') i++;
		else if(w[i] == 'z' && w[i+1] == '=') i++;
		count++;
	}
	return count;
}
