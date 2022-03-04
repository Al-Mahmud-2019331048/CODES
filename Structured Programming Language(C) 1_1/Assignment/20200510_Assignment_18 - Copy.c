#include<stdio.h>
#include<stdlib.h>
#define sz 1000000
int arr[sz],cnt;
 void sort(int arr[],int n);
int main()
{
  int i,n,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

sort(arr,n);

    if(!cnt){
     printf("the array is sorted\n");
  for(j=0;j<n;j++)
   printf("%d%c",arr[j],",\n"[j==n-1]);}
   else{
    printf("the array is not sorted\n");
   }


    return 0;
}
void sort(int a[] , int n)
{
  int i,j,temp;
  for(i=1;i<n;i++){
    for(j=1;j<=n-i;j++)
        if(a[j-1]>a[j])
{
        temp=a[j];
        a[j]=a[j-1];
        a[j-1]=temp;
        cnt++;
return ;
    }
  }


   }
