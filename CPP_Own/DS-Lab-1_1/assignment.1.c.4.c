#include<stdio.h>

int main()
{
    int x=2,y=3,z;
    float c=40.67,d,e;
    z=(x>--y)? ++x : y--;
    d=(x+y)/2;
    e=(x+z)/4;

    printf("%8.4f %8.4f %8.4f\n", x,y,c);
    printf("%8.3f %8.3f %8.3f\n", x,y,z);
    printf("%e %e %e\n", c ,d ,e);
    printf("%3e %3e %3e\n", c, x, e);
    printf("%7.4e %2.4e %8.8e %4.5e\n", c,d,e,z);
    printf("%8.2e %8.2e %8.2e %8.2e\n", c,d,e,x);
    printf("%-8f %-8f %-8f %-8f\n", c,d,e,z);
    printf("%O8f %O5f %O6f %O4f\n", c,d,e,y);
    printf("%#3f %#4f %#5f %#6f\n", x,c,d,e);
    printf("%#g %#g %#g %#g %#g %#g", c,d,e,x,y,z);
 }
