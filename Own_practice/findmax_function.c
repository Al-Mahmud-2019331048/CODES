#include<stdio.h>
int find_max(int array[],int n)
{
    int max=array[0];
    int i;
    for(i=0;i<n;i++){
        if(array[i]>max){
        max=array[i];

        }
    }
return max;
}

int main()

{
    int array[100];
    int i,j,n,count;

    for(i=0;array[i]!='\n';i++){
    scanf("%d ",&array[i]);

    }
    for(j=0;array[j]!='\0';j++){
     count++;
    }
    n=count;
    int max=find_max(array,n);
    printf("%d\n",max);
    return 0;
}
