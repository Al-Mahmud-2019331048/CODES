#include<stdio.h>
int main()
{
////    positivec negetive zero
//    int n;
//    scanf("%d",&n);
//    if(n>0){
//        printf("positive");
//    }
//    else if(n==0){
//
//        printf("zero");
//    }
//    else{
//        printf("negative");
//    }


//// greater or smaller
//int n=12;
//if(n>10){
//    printf("the number is grater than ten");
//}


////if omly see first conditional if true
//int n=10;
//if(n<30){
//    printf("the number is less tham 30");
//}
//else if(n<50){
//    printf("the number is less than 50");
//}
//

////double if true
//int n=10;
//if(n<30){
//    printf("the number is less than 30\n");
//}
//if(n<50){
//    printf("the number is less than 50\n");
//}


////even odd problem
//
//int number,remainder;
//printf("number:");
//scanf("%d",&number);
//remainder=number%2;
//    if(remainder==0){
//        printf("even number");
//    }
//    else{
//        printf("0dd number");
//    }


////remainder without modulus
//int vajok,vajjo,vagfol,remainder;
//printf("vajok:");
//scanf("%d",&vajok);
//printf("vajjo:");
//scanf("%d",&vajjo);
//vagfol=(vajjo/vajok);
//remainder=vajjo-(vajok*vagfol);
//printf("remainder:%d",remainder);


////uppercase lower case
//char ch;
//ch=getchar();
//if(ch>='a' && ch<='z'){
//    printf("%c is lower case\n",ch);
//}
//else if(ch>='A' && ch<='Z'){
//    printf("%c is upper case\n",ch);
//}


////vowel consonanant
char ch;
ch=getchar();
if(ch=='a' || ch=='e' || ch=="i" || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=="I" || ch=='O' || ch=='U'){
    printf("%c is vowel",ch);
}
else{
    printf("%c is consonant",ch);
}

return 0;
}
