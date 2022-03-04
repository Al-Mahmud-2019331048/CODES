#include<stdio.h>
#define sz 100
int arr[sz];

void sort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
            if(a[j-1]>a[j])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,n);
    for(i=0;i<n;i++)
        printf("%d%c",arr[i],"\n"[i==n-1]);
    return 0;
}
