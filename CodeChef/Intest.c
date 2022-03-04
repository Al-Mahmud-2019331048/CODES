#include<stdio.h>

//Mahmud
//CSE'19,SUST

int main()
{
	int n,k,cnt=0;
	scanf("%d %d",&n,&k);
	for (int i = 0; i < n; ++i)
	{
		int t;
		scanf("%d",&t);
		if(t%k==0)
			cnt++;
	}
	printf("%d\n",cnt);
	

	return 0;
}


