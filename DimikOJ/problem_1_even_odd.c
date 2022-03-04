#include<stdio.h>

int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		if(n%2)
			printf("odd\n");
		else
			printf("even\n");
	}
 return 0;
}