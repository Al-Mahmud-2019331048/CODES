#include<stdio.h>
int main()
{
    int n,year,choice=0;
    float val,tag,deprec;
    while(choice!=4){
        printf("method: (1-sl  2-ddb  3-syd  4-end)");
        scanf("%d",&choice);
        if(choice>=1 && choice<=3){
            printf("original value: ");
            scanf("%f",&val);
            printf("number of years: ");
            scanf("%d",&n);
        }
        switch(choice){
        case 1:
            printf("straight line method\n");
            for(year=1;year<=n;year++){
            deprec=val/n;
            val=val-deprec;
            printf("end of year %2d  ",year);
            printf("depreciation: %f  ",deprec);
            printf("current value: %f\n",val);
            }

          break;
        case 2:
            printf("double-declining-method\n");
            for(year=1;year<=n;year++){
                deprec=2*val/n;
                val=val-deprec;
                printf("end of year : %2d  ",year);
                printf("depreciation: %f    ",deprec);
                printf("current value: %f\n",val);
            }
            break;
        case 3:
            printf("some of the years digit methods\n");
            tag=val;
            for(year=1;year<=n;year++){
                deprec=(n-year+1)*tag/(n*(n+1)/2);
                val=val-deprec;
                printf("end of year : %2d  ",year);
                printf("depreciation: %f  ",deprec);
                printf("current value: %f\n",val);
            }
            break;
        case 4:
            printf("goodbye,have a nice day\n");
            break;
        default:
            printf("incorrect data emtry - please try again later");


    }
    return 0;
}
}
