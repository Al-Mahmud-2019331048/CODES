#include<stdio.h>
#include<math.h>

double area_circle(double r)
{
    double area=3.1416*r*r;

    return area;
}

int main()
{
    double area, rad;
    printf("The radious of circle is: ");
    scanf("%lf",&rad);
    area=area_circle(rad);
    printf("%lf",area);
    return 0;
}
