#include<stdio.h>
int main()
{
    int ara1[]={3,1,5,2,4};
    int ara2[5];
    int i,index_2,minimum,minimum_index;
//    listing minimum
    for(index_2=0;index_2<5;index_2++){
        minimum=100000;
//        finding minimum
        for(i=0;i<5;i++){
            if(ara1[i]<minimum){
                minimum=ara1[i];
                minimum_index=i;
            }
            ara1[index_2]=minimum;
        }
        ara1[minimum_index]=100000;
//        entering minimum in new array
//        ara2[index_2]=minimum;
    }
//    printing minimum
    for(i=0;i<5;i++){
        printf("%d\n",ara1[i]);
    }

    return 0;
}
