#include <stdio.h>
#include <stdlib.h>

typedef struct data
{
	int valve;
	int *addr;
}data;

void mergeSort(data n[], int p,int r, int N);
void merge(data n[], int p, int q, int r, int N);

int main(void)
{
	int N;
	scanf("%i", &N);
	if(!(1 <= N && N <= 1000000)) return 1;
	int result[N];
	data n[N];
	int count = 0;
	for(int i = 0; i < N; i++){
		scanf("%i", &n[i].valve);
		n[i].addr = &result[i];
	}
	mergeSort(n, 0, N-1, N);
	*n[0].addr = 0;
	for(int i = 0; i < N - 1; i++){
		int j = i +1;
		if(n[i].valve == n[j].valve) *n[j].addr = count;
		else{
			count++;
			*n[j].addr = count;
		}
	}
	for(int i = 0; i < N; i++) printf("%i ", result[i]);

	return 0;
}

void mergeSort(data n[], int p, int r, int N)
{
	int q;
	if(p<r)
	{
		q = (p+r)/2;
		mergeSort(n, p, q, N);
		mergeSort(n, q+1, r, N);
		merge(n, p, q, r, N);
	}
}
void merge(data n[], int p, int q, int r, int N)
{
	int i = p, j = q + 1, k = p;
	data tmp[N];
	while(i <= q && j <= r)
	{
		if(n[i].valve <= n[j].valve){ 
			tmp[k].valve = n[i].valve;
			tmp[k].addr = n[i].addr;
			k++;
			i++;
		}
		else{ 
			tmp[k].valve = n[j].valve;
			tmp[k].addr = n[j].addr;
			k++;
			j++;
		}
	}
	while(i <= q){
	   	tmp[k].valve = n[i].valve;
		tmp[k].addr = n[i].addr;
		k++;
		i++;
	}
	while(j <= r){
	   	tmp[k].valve = n[j].valve;
		tmp[k].addr = n[j].addr;
		k++;
		j++;
	}
	for(int a = p; a <= r; a++){
		n[a].valve = tmp[a].valve;
		n[a].addr = tmp[a].addr;
	}
}
