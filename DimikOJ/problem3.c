#include<stdio.h>

//mahmud48

int main()
{
	int n=1000;
	for (int i = 1; i <=1000; ++i)
	{
		
		//printf("%-8d",n);
		printf("%d\t",n);
		//printf("\t");
		n--;
		if(i%5==0)
			printf("\n");
	}
	
	return 0;
}