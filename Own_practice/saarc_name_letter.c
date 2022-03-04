#include<stdio.h>
#include<string.h>
int main()
{
    char saarc[7][100]={"Bangladesh","India","Pakistan","Sri Lanka","Nepal","Vutan","Maldives"};
    int row,col,name_length;
    for(row=0;row<7;row++){
        name_length=strlen(saarc[row]);
    printf("%s\n",saarc[row]);
        for(col=0;col<name_length;col++){
            printf("(%d,%d) = %c\n",row,col,saarc[row][col]);
            if((col+1)==name_length){
                printf("----------\n");
            }
        }
    }

   return 0;
}
