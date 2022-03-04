#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//function prototypes
void table(double(*pf)(double i,int m,double n),double a,int m,double n);
double md1(double i, int m,double n);
double md2(double i, int m,double n);
double md3(double i, int m,double n);
void main()  //calculate the future value of a series of monthly deposits
{
    int m;  //number of computing periods per year
    double n;  //number of years
    double a;  //amount of each monthly payment
    char freq;  //frequency of computing indicator
    //enter input data
    printf("FUTURE VALUE OF A SERIES OF MONTHLY DEOPOSITS\n");
    printf("Amount of Each Monthly Payment:");
    scanf("%lf",&a);
    printf("Number of Years:");
    scanf("%lf",&n);
    //enter frequency of compounding
    do{
        printf("Freqyency of compounding(A,S,Q,M,D,C):");
        scanf("%lf",&freq);
        freq=toupper(freq);  //convert upper case
        if(freq=='A'){
            m=1;
            printf("\nAnnual Compounding\n");
        }
        else if(freq=='S'){
            m=2;
            printf("\nSemiannual Compounding\n");
        }
        else if(freq=='Q'){
            m=4;
            printf("\nQuarterly Compounding\n");
        }
         else if(freq=='M'){
             m=12;
            printf("\nMonthly Compounding\n");
        }
        else if(freq=='D'){
            m=360;
            printf("\nDailylyCompounding\n");
        }
        else if(freq=='C'){
            m=0;
            printf("\nContinuous Compounding\n");
        }
        else
            printf("\nERROR~ Please Repeat\n");
    } while(freq == 'A' && freq == 'S' && freq == 'Q' && freq == 'M' && freq == 'D' && freq == 'C');
    //carry ouyt the calculations
    if(freq=='C')
        table(md3,a,m,n);  //continuous compounding
    else if(freq=='D')
        table(md2,a,m,n);  //daily compounding
    else
        table(md1,a,m,n);  //annual,semiannual,quartary ot monthly compounding
}
void table(double (*pf)(double i,int m,double n),double a,int m,double n)
  //table genarator(this function accepts a ppointer to another function as a n argument)
{
    int count;  //loop counter
    double i;  //annual interest rate
    double f;  //future value
    printf("INTER RATE   FUTURE AMOUNT\n");
    for(count=0;count<=20;count++){
        i=0.01*count;
        f=a*(*pf)(i,m,n);
        printf("  %2d    %.2f\n",count,f);
    }
    return;
}
double md1(double i,int m,double n)
{
    double factor,ratio;
    factor=1+ i/m;
    ratio=12*(pow(factor,m*n)-1)/i;
    return ratio;
}
double md2(double i, int m,double n)
{
    double factor,ratio;
    factor=1+ i/m;
    ratio=(pow(factor,m*n)-1)/(pow(factor,m/12)-1);
    return ratio;
}
double md3(double i, int m,double n)
{
    double ratio;
    ratio=(exp(i*n)-1)/(exp(i/12)-1);
    return ratio;
}

