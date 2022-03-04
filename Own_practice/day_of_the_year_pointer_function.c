#include<stdio.h>

void readinput(int *pm,int *pd,int *py);
int convert(int mm,int dd,int yy);
void main()
{
    int mm,dd,yy;
    int day_of_week; //0->sunday,1->monday......6->saturday
    char *weekday[]={"Sunday","Monday","Tuseday","Wednesday","Thursday","Friday","Saturday"};
    char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("Date Conversion Routine\n(To STOP,enter 0 0 0)\n");
    readinput(&mm,&dd,&yy);
    //convert date to nurimerical day of week
    while(mm>0){
        day_of_week=convert(mm,dd,yy);
        printf("%s,%s %d,%d\n\n",weekday[day_of_week],month[mm-1],dd,yy);
        readinput(&mm,&dd,&yy);
    }
    return;
}
void readinput(int *pm,int *pd,int *py)   //read the numerical date
{
    printf("Enter mm dd yyyy:");
    scanf("%d %d %d",pm,pd,py);
    return;
}
int convert(int mm,int dd,int yy)   //convert date to the numerical day of week
{
    long ndays,ncycles;
    int day,nyears;
    //numerical conversions
    yy-=1900;  //1900 is the base year
    ndays=(long) (30.42*(mm-1))+dd; //approximate day of the year
    if(mm==2) ++ndays;    //adjust for february
    if((mm>2) && (mm<8)) --ndays;  //adjust for march to july
    if((yy%4 == 0) && (mm>2)) ++ndays;   //adjust for leap year
    ncycles=yy/4;   //4 year cycle beyond 1900
    ndays+=ncycles*1461;   //add for 4 year cycle
    nyears=yy%4;    //years beyond last 4 year cycle
    if(nyears>0)   //add days for years beyond last 4 year cycle
        ndays+=365*nyears+1;
    if(ndays>59)  //adjust for 1900(not a leap yera)
        --ndays;
    day=ndays%7;
    return (day);
}
