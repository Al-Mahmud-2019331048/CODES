#include<stdio.h>
#include<stdlib.h>

//Mahmud
//CSE'19,SUST

int main()
{
	int a, b, cnt = 0;
	scanf("%d %d", &b, &a);
	int ans = abs(b - a);
	int res = ans;
	int arr[10];
	//printf("%d\n", ans);

	// int last=ans%10;
	// if(last==9)
	// 	printf("%d\n",ans-1);
	// else
	// 	printf("%d\n",ans+1);




	if (ans == 0) {
		printf("1\n");
	}
	else {
		for (int i = 0; ans; ++i)
		{
			arr[i] = ans - (ans / 10) * 10;
			//printf("%d ", arr[i]);
			ans /= 10;
			cnt++;
		}

		if (arr[0] == 9)
			arr[0] = 1;
		else
			arr[0] += 1;
		for (int i = cnt - 1; i >= 0 ; --i)
		{
			printf("%d", arr[i]);
		}
		printf("\n");
	}




	// int n=1;
	// for (int i = 0; i < cnt; ++i)
	// {
	// 	n*=10;
	// }
	// if(ans==0)
	// 	printf("1\n");
	// else if(res%n==0)
	// 	printf("%d",res-1);
	// else
	// 	printf("%d",res+1);


	// printf("%d  %d",cnt,n);


	return 0;
}