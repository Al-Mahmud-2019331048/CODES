//cumulative sum or prefix sum

#include<stdio.h>
#define sz 100

int sum[sz];

int getSum(int st,int end)  //O(1)
{
	int ans=sum[end]-sum[st-1];
	return ans;
}

int main()
{
	int A[5]={3,5,1,5,2};
	//1 base indexing
	//sum(1,3)=?
	//sum(1,4)=?

	//sum(k-1)=A[1]+A[2]+...+A[k-1]
	//sum[k]=A[1]+A[2]+...+A[k-1]+A[K]
	//sum[k]=sum(k-1)+A[k]
	//sum(a,b)=sum[b]-sum[a-1];

	int b[sz],n,sum[sz];
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i)
		scanf("%d",&b[i]);

	sum[0]=0; 
	for (int i = 1; i <= n; ++i)
		sum[i]=sum[i-1]+b[i];
	printf("%d\n",sum[4]);

	int ans=getSum(1,5);
	printf("ans=%d\n",ans);
	int q,x,y;
	//scanf("%d",&q);
	// while(q--){
	// 	scanf("%d %d",&x,&y);   //index
	// 	printf("%d\n",getSum(x,y));
	// }



	return 0;
}