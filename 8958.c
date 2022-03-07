#include <stdio.h>

int main(void)
{
	int N;
	scanf("%i", &N);
	getchar();
	int n[N];
	for(int i = 0;i < N; i++)
	{
		char ox[81] = {};
		int j = 0;
		int count = 0;
		int tmp = 0;
		scanf("%s", ox);
		getchar();
		int k = 0;
		while(ox[k] != '\0')
		{
			if(ox[k] == 'O')
			{
				count++;
				tmp += count;
			}
			else if (ox[k] == 'X') count = 0;
			k++;
		}
		n[i] = tmp;
	}
	for(int i = 0; i < N; i++) printf("%i\n", n[i]);

	return 0;
}
