#include<stdio.h>
#include<math.h>

int main()
{
	int x[4],y[4],t;
	int i=1;
	int area;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d %d %d %d",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2]);
		x[3]=x[0]+x[2]-x[1];
		y[3]=y[0]+y[2]-y[1];

		printf("Case %d: %d %d ",i,x[3],y[3]);
		i++;

		area=0.5*(x[0]*y[1]+x[1]*y[2]+x[2]*y[3]-y[0]*x[1]+x[3]*y[0]-y[1]*x[2]-y[2]*x[3]-y[3]*x[0]);
		if(area<0)
			area*=-1;

		printf("%d\n",area);

	}



	return 0;
}