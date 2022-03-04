#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p[5],i,j,n;
    for(i=0;i<5;i++)
    {
        scanf("%d",&n);
        p[i]=malloc(sizeof(int)*n);
        for(j=0;j<n;j++)
        {
            scanf("%d",*(p+i)+j);
            printf("i=%d , j=%d , p(%d,%d)=%d , &p -> %d\n",i,j,i,j,*(*(p+i)+j),*(p+i)+j);
        }
    }


    return 0;
}

//5 64 7 35 36 35 35 37
//6 34 23 35
//34 46 8
//7 9
//54 63 24 35

