#include <stdio.h>

typedef struct Person
{
	char name[101];
	int age;
}
Person;

int main(void)
{
	int N;
	
	scanf("%i", &N);
	if(!(1 <= N && N <= 100000)) return 1;
	Person n[N];
	for(int i = 0; i < N; i++)
		scanf("%i %s", &n[i].age, n[i].name);
	for(int i = 1; i < 201; i++)
		for(int j = 0;j < N;j++)
			if(n[j].age == i)
				printf("%i %s\n",n[j].age, n[j].name);

	return 0;
}
