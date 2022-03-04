#include<stdio.h>
#define sz 100
int arr[sz];
int comp(const void *a,const void *b)
{

    return(*(int*)a-*(int *)b);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(int),comp);
    for(i=0;i<n;i++)
        printf("%d%c",arr[i],"\n"[i==n-1]);
    return 0;
}
