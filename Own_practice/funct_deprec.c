#include<stdio.h>
#include<ctype.h>
void writeoutput(int year,float depreciation,float value)
{
    printf("End of year %2d",year);
    printf("  Depreciation:%7.2f",depreciation);
    printf("  Current value: %8.2f\n",value);
    return;

}
//        straight line method
void sl(float val,int n)
{
    float deprec;
    int year;
    deprec=val/n;
    for(year=1;year<=n;year++){
        val-=deprec;
        writeoutput(year,deprec,val);
    }
    return;
}
//        double declining method
void ddb(float val,int n)
{
    float deprec;
    int year;
    for(year=1;year<=n;year++){
        deprec=2*val/n;
        val-=deprec;
        writeoutput(year,deprec,val);
    }
    return;
}
//  sum of the year digit method
void syd(float val,int n)
{
    float tag,deprec;
    int year;

    tag=val;
    for(year=1;year<=n;year++){
        deprec=(n-year+1)*tag/(n*(n+1)/2);
        val-=deprec;
        writeoutput(year,deprec,val);
    }
    return;
}
//        display output data
main()
{
    int n,choice=0;
    float val;
    char answer1='Y',answer2='Y';
    while(toupper(answer1)!='N'){
        if(toupper(answer2)!='N'){
            printf("\noriginal value:");
            scanf("%f",&val);
            printf("Number of years:");
            scanf("%d",&n);
        }
        printf("\nMethod:(1-sl  2-ddb  3-syd)");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("\nStraight line method\n");
            sl(val,n);
            break;
        case 2:
            printf("\nDouble Declining Balance Method\n");
            ddb(val,n);
            break;
        case 3:
            printf("\nSum of Year Digit Method\n");
            syd(val,n);
            break;
        }

        printf("\n\n Another Calculation? (Y/N)");
        scanf("%1s",&answer1);
        if(toupper(answer1)!='N'){
            printf("Enter a new set of data? (Y/N)");
            scanf("%1s",&answer2);
        }

    }
    printf("Goodbye,have a nice day!\n");

}
