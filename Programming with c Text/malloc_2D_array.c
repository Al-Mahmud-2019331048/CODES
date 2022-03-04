#include<stdio.h>

int main()
{
    int *p[5],n;
//    p=(int *)malloc(sizeof(int)*5*20);  //int p[5][20]
    for(int i=0;i<5;i++)
    {
        scanf("%d",&n);
        p[i]=malloc(sizeof(int)*n);
        printf("p[%d]=%d\n",i,p[i]);
        for(int j=0;j<n;j++)
        {
            scanf("%d",*(p+i)+j);
            printf("i=%d , j=%d , address=%d\n",i,j,*(p+i)+j);
        }

    }
    return 0;
}

/*
input:
n   number
--  --------------------------
4   3 8 111 -1
1   3
10   34 3453 5 345 34 5 4 54 5 3
3   2 1 2
1   4


*/
