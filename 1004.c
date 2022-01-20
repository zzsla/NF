#include <stdio.h>
#include <stdbool.h>

int pointcheck(int a,int b,int c, int x,int y);

int main(void)
{
	unsigned int T; //테스트 케이스 개수
	int x1, y1, x2, y2; // 출발점, 도착점
	unsigned int n; //행성계 개수
	int cx, cy, r; // 행성계의 중점과 반지름

	scanf("%i", &T);
	int array[T];

//	int palnet[p][3]; // 행성계 저장공간
//	bool h[p][3];

	for(int t = 0; t < T; t++){
		scanf("%i %i %i %i",&x1,&y1,&x2,&y2);
		if(x1 > 1000 || x1 < -1000 || y1 > 1000 || y1 < -1000 || x2 > 1000 || x2 < -1000 || y2 > 1000 || y2 < -1000)
		{
			return 1;
		}
		else 
		{
			scanf("%i",&n);
			if(n>50 || n<1) return 1;
			else
			{
				int p;
				int ans;
				int planet[T][n][3]; // 행겅계 저장공간
				bool h[T][n][3]; //행성계에 있는지 없는지 대한 값 저장공간

				for(p = 0; p < n ;p++){

					scanf("%i %i %i", &cx, &cy, &r);
					if(cx>1000 || cy>1000 || cx<-1000 || cy<-1000 || r>1000) return 1;
					else
					{
						planet[t][p][0] = cx;
						planet[t][p][1] = cy;
						planet[t][p][2] = r;
					}
					h[t][p][0]=pointcheck(planet[t][p][0],planet[t][p][1],planet[t][p][2],x1,y1);
					h[t][p][1]=pointcheck(planet[t][p][0],planet[t][p][1],planet[t][p][2],x2,y2);
					if(h[t][p][0] > h[t][p][1] || h[t][p][1] > h[t][p][0])
					{
						h[t][p][2] = 0;
					}
					else h[t][p][2] = 1;
					ans += h[t][p][2];
				}
				array[t] = ans;
				ans = 0;
			}
		}
	}
	for(int a = 0; a < T; a++){
		printf("%i\n", array[a]);
	}
	return 0;
}

int pointcheck(int a, int b, int c, int x, int y)
{
	if(((a-x)*(a-x))+((b-y)*(b-y)) > (c*c)) return 0;
	else if(((a-x)*(a-x))+((b-y)*(b-y)) < (c*c)) return 1;
	else return 0;
}

