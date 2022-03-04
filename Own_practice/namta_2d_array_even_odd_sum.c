#include<stdio.h>
int main()
{
    int namta[10][10];

    int i,j,even=0,odd=0,sum=0;

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
                namta[i][j]=(i+1)*(j+1);
        }
    }

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%3d *%3d=%4d\n",i+1,j+1,namta[i][j]);

            if(j==9){
                printf("------------------\n");
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(namta[i][j]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
    }
    printf("even count:%d\n Odd count:%d\n",even,odd);

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
          sum+=namta[i][j];
          }
          }
          printf("total sum : %d",sum);
    return 0;
}
