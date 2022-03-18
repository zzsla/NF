#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char prime_number[246912] = {};
	char *pn; //Eratosthenes's sieve
	pn = (char *)malloc(sizeof(char) * 246912);
	pn[0] = 1;
	pn[1] = 1;
	for(int i = 2; i < 246912;)
	{
		int j = 2;
		while((i*j) <= 246912)
		{
			pn[i*j] = 1;
			j++;
		}
		i++;
		while(pn[i] != 0) i++;
	}
	
	int n = 1, count = 0, dn;
	while(n != 0)
	{
		count = 0;
		scanf("%i",&n);
		if(n == 0) break;
		dn = 2 * n;
		for(int i = n + 1; i <= dn; i++)
		{
			if(i > dn) break;
			if(pn[i] == 0) count++;
		}
		printf("%i\n", count);
	}
	free(pn);

	return 0;
}
