#include<stdio.h>
int main()
{
    int ara1[100];
    int ara2[100];
    int i,count,index_2,minimum,minimum_index;
    printf("Enter some number:");
    for(i=0;ara1[i]!='\n';i++){
        scanf("%d",ara1[i]);
    }

    for(i=0;ara1[i]!='\0';i++){
        count++;
    }
//    listing minimum
    for(index_2=0;index_2<count;index_2++){
        minimum=100000;
//        finding minimum
        for(i=0;i<count;i++){
            if(ara1[i]<minimum){
                minimum=ara1[i];
                minimum_index=i;
            }
        }
        ara1[minimum_index]=100000;
//        entering minimum in new array
        ara2[index_2]=minimum;
    }
//    printing minimum
    for(i=0;i<count;i++){
        printf("%d\n",ara2[i]);
    }

    return 0;
}
