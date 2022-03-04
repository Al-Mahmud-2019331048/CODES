#include<stdio.h>
 void main()
{
    double n;
    int a;
    scanf("%lf",&n);
    a=(n<0);
    switch(a){
    case 1:
        printf("Ice\n");
        break;
    default:
        a=(n>100);
        switch(a){
        case 1:
            printf("Vapor\n");
            break;
        default:
            printf("Water\n");
            break;
        }
        break;
    }
    return 0;
}
