#include<stdio.h>
#include<math.h>

#define CNST 0.0001

double a,b,xl,yl,xr,yr;

void reduce(void);
double curve(double xl);

main()
{
    double xmax,ymax;
    printf("a= ");
    scanf("%lf",&a);
    printf("\nb= ");
    scanf("%lf",&b);
    do
        reduce();
    while((yl != yr) && ((b-a)>3*CNST));
    xmax=0.5*(xl+xr);
    ymax=curve(xmax);
    printf("\nxmax=%7.5lf  ymax=%7.5lf",xmax,ymax);
}
void reduce(void)
{
    xl=a+0.5*(b-a-CNST);
    xr=xl+CNST;
    yl=curve(xl);
    yr=curve(xr);
    if(yl>yr){
        b=xr;
        return;
    }
    if(yl<yr){
        a=xl;
        return;
    }
}
double curve(double x)
{
    return (x*cos(x));
}
