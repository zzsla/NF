#include <stdio.h>

int main(void)
{
	int n[8] ={};
	int num = 0;
	for(int i = 0; i < 8; i++)
		scanf("%i", &n[i]);
	for(int i = 0; i < 8; i++){
		if(n[i] == i + 1) num += 1;
		else if(n[i] == 8 - i) num -= 1;
	}
	if(num == 8) printf("ascending");
	else if(num == -8) printf("desceding");
	else printf("mixed");

	return 0;
}
