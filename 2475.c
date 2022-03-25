#include <stdio.h>

int main(void)
{
	int n[5];
	int result = 0;
	for(int i = 0; i < 5; i++){
		scanf("%i", &n[i]);
		n[i] *= n[i];
		result += n[i];
	}
	result %= 10;
	printf("%i", result);

	return 0;
}
