#include<stdio.h>
#include<stdlib.h>

void recorder(int n,int *x);
int main()
{
    int i,n,*x;
    printf("How many numbers will be entered? ");
    scanf("%d",&n);
    x=(int *)malloc(sizeof(int)*n);

    //read the list of numbers
    for(i=0;i<n;i++){
        printf("i=%d  x= ",i+1);
        scanf("%d",&x+i);
    }
    recorder(n,x);

    printf("Recorded list of numbers:\n");
    for(i=0;i<n;i++)
        printf("i=%d  x=%d\n",(i+1),*(x+i));
}

void recorder(int n,int *x)
{

    int i,item,temp;
    for(item=0;item<n-1;++item)
        for(i=item+1;i<n;++i)
            if(*(x+i)<*(x+item))
                temp=*(x+item);
                *(x+item)=*(x+i);
                *(x+i)=temp;
    return;
}
