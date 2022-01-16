//터렛 문제
#include <stdio.h>

int main(void)
{
	int x1,x2,y1,y2;
	unsigned int r1,r2;
	int T;

	scanf("%i\n", &T);
	//배열을 이용하여 출력값 저장공산 생성
	int array[T];
	
	for(int t = 0; t < T; t++)
	{
		scanf("%i %i %i %i %i %i", &x1, &y1, &r1, &x2, &y2,&r2);

		if(x1>10000 || x2>10000 || y1>10000 || y2>10000 || r1>10000 || r2>10000 || x1<-10000 || x2<-10000 || y1<-10000 || y2<-10000)
		{
			return 1;
		}
		else
		{
			int x3 = x2 - x1;
			int y3 = y2 - y1;

			int v1 = (x3*x3)+(y3*y3);
			int r3 = r1 + r2;
			int v2 = r3 * r3;
			if(v1 ==0)
			{
				if(r1 == r2)
				{
					array[t] = -1;
				}
				else
				{
					array[t] = 0;
				}
			}
			else
			{
				if(v1<v2)
				{
					array[t] = 2;
				}
				else if(v1 == v2)
				{
					array[t] = 1;
				}
				else if(v1 > v2)
				{
					array[t] = 0;
				}
			}
		}
	
	}
	for(int a = 0; a < T; a++)
	{
		printf("%i\n", array[a]);
	}
	return 0;
}

