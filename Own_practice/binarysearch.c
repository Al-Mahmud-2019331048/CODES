#include<stdio.h>
int found_a_number(int low_indx,int high_indx,int mid_indx,int num,int i,int ara[])
{
    while(low_indx<=high_indx){
        mid_indx=(low_indx+high_indx)/2;

        if(num==ara[mid_indx]){
            break;
        }
        if(num<ara[mid_indx]){
            high_indx=mid_indx-1;
        }
        else{
            low_indx=mid_indx+1;
        }
    }
    if(low_indx>high_indx){
        i=0;
    }
    else{
        i=1;

    }
 return i;
}
int main()
{
    int array[]={1,4,8,9,13,24,25,46,78,90,112,135,158,190,234,345,367};
    int mid,i,low=0,high=16,val,num=99;
    val=found_a_number(low,high,mid,num,i,array);
    if(val=0){
        printf("not found");
    }
    if(val=1){
        printf("found");
    }
    return 0;
}
