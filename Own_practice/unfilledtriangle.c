#include <stdio.h>

int main()
{
    int i,j,N;
    printf("Enter Number Of N: \n");
    scanf("%d" , &N);
    for( i=1; i<=N; i++)
    {
    for( j=i; j<N; j++)
        {
            printf("  ");
        }
        for( j=1; j<=(2*i-1); j++)
        {
            if(i==N || j==1 || j==(2*i-1))
            {
                printf ("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}
