#include<stdio.h>
int main()
{
    float n,p,AP;
    printf("Total taken class:\n");
    scanf("%f",&n);
    printf("Total present:");
    scanf("%f",&p);
    AP=(p/n)*100;
    printf("The attendance percentage is:%.2f %%\n ",AP);

    if(AP>=95){
        printf("Marks:10");
    }
    else if(AP>=90){
        printf("Marks:9");
    }
    else if(AP>=85){
        printf("Marks:8");
    }
    else if(AP>=80){
        printf("Marks:7");
    }
    else if(AP>=75){
        printf("Marks:6");
    }
     else if(AP>=70){
        printf("Marks:5");
    }
    else if(AP>=65){
        printf("Marks:4");
    }
    else if(AP>=60){
        printf("Marks:3");
    }
    else{
        printf("Marks:0");
    }

    return 0;
}
