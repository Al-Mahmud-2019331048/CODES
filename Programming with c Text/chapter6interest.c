#include<stdio.h>
#include<math.h>
int main()
{
    float p,n,r,i,f;
    printf("enter a valuse for the principal:");
    printf("\n(to end program, enter 0 for the principal):");
    scanf("%f",&p);
    if(p<0){
        printf("\n error-please try again");
        scanf("%f",&p);
    }
    while(p>0){
        printf("\n enter a value for interest rate:");
        scanf("%f",&r);

        if(r<0){
            printf("\n error-please try again");
            scanf("%f",&r);
        }

        printf("\n enter a value for the number of years:");
        scanf("%f",&n);
        if(n<0){
        printf("\n error-please try again");
        scanf("%f",&n);
        }
        i=r/100;
        f=p*pow((1+i),n);

        printf("\nthe final value (f)is: %f ",f);
        printf("\n\nplease enter a value for the principal(P)");
        printf("\n(to end program,enter 0 for the principal):");
        scanf("%f",&p);
        if(p<0){
            printf("\n error-please try again: ");
            scanf("%f",&p);
        }
    }
return 0;
}
