#include<stdio.h>

struct date{
    int day;
    int month;
    int year;
};
struct student{
    int reg;
    struct date *birthday;
    struct date today;
    }std_info[],*cur;

int main()
{
    struct date std_birthday[]={19,5,2000,11,5,1997,19,2,2002}, *cur_std;
    //cur_std is not a structure,,rather it is a pointer of structure,,& it has no member
//    value=(*cur_std),,
    int i,n=3;
    for(i=0;i<n;i++){
        cur_std=&std_birthday[i];
        cur=&std_info[i];
        cur->birthday=cur_std;
        cur->today.day=29;
        cur->today.month=8;
        cur->today.year=2020;
        cur-> reg=20193311+i;
        printf("std#%8d : %2d day,%2d month, %4d year\n",cur->reg,(*cur_std).day,cur_std -> month, (*cur_std).year);
        //(*cur_std).day  and  cur_std->day works similarly
    }

 return 0;
}
