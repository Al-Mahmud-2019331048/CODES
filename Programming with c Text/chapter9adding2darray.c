#include<stdio.h>
int main()
{
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;

    printf("how many rows?(between 1 to 100)\n");
    scanf("%d",&r);
    printf("how many columns?(between 1 to 100)\n");
    scanf("%d",&c);

    printf("enter the element of first matrix:");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("the element a%d%d",i+1,j+1);
                sacnf("%d",&a[i][j]);
            }
        }
     printf("enter the element of second matrix:");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("the element b%d%d",i+1,j+1);
                sacnf("%d",&b[i][j]);
            }
        }

        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                sum[i][j]=a[i][j]+b[i][j];
            }
        }

    printf("\nsum of two matrix:\n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("%d   ",sum[i][j]);
                if(j=c-1){
                    printf("\n\n");
                }
            }
        }
return 0;
}
