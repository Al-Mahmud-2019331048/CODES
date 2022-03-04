#include<stdio.h>
int main()
{
////    print number using for loop
//    int i,n;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++){
//        printf("%d\n",i);
//    }
////while loop
//int i=1,n;
//scanf("%d",&n);
//while(i<=n) {
//    printf("%d\n",i);
//    i++;
//}
//
////print even number
// int i,n;
//    scanf("%d",&n);
//    for(i=2;i<=n; ){
//        printf("%d\n",i);
//        i+=2;
//    }
//
////while loop
//int i=2,n;
//scanf("%d",&n);
//while(i<=n) {
//    printf("%d\n",i);
//    i+=2;
//}
////incomplete loop
//int i=2,n;
//scanf("%d",&n);
//while(i<=n) {
//    printf("%d\n",i);
//
//}
//  i+=2;

////get out from loop...break statement
//int i=1,n;
//scanf("%d",&n);
//while(i<=n) {
//    printf("%d\n",i);
//    i++;
//    if(i>10){
//        break;
//    }
//}

////print even number using continue statement
//int i=0,n;
//scanf("%d",&n);
//while(i<n){
//    i++;
//        if(i%2!=0){
//        continue;
//    }
//
//    printf("%d\n",i);
//}
////multiplication table using while loop
//int i=1,n=5;
//while(i<=10){
//    printf("%d * %d = %d\n",i,n,i*n);
//    i++;
//}

////multiplication table using for loop
//int i,n=5;
//for(i=1;i<=1000;i++){
//    printf("%d * %d = %d\n",i,n,i*n);
//}


////multiplication table with blank for

//int i=1,n=5;
//for( ; ; ){
//    printf("%d * %d = %d\n",i,n,i*n);
//    i++;
//    if(i>10){
//        break;
//    }
//}

////multiplication table using addition
//int i,m=0,n=5;
//for(i=1;i<=10;i++){
//    m=m+n;
//    printf("%d * %d = %d\n",i,n,m);
//}


////multiplication table from one to twenty
//int i,n;
//for(n=1;n<=20;n++){
//    for(i=1;i<=10;i++){
//        printf("%d * %d = %d\n",n,i,i*n);
//    }
//}

////multiplication table using addition from one two twenty
//int i,n,m=0;
//for(n=1;n<=20;n++){
//    m=0;
//    for(i=1;i<=10;i++){
//           m=n+m;
//        printf("%d * %d = %d\n",n,i,m);
//    }
//}
//

////combination using loop
//int a,b,c;
//for(a=1;a<=50;a++){
//    for(b=1;b<=50;b++){
//        for(c=1;c<=50;c++){
//            printf("%d, %d, %d\n",a,b,c);
//        }
//    }
//}

//int a,b,c;
//for(a=1;a<=3;a++){
//    for(b=1;b<=3 && b!=a;b++){
//        for(c=1;c<=3 && c!=a && c!=b;c++){
//            printf("%d, %d, %d\n",a,b,c);
//        }
//    }
//}
//
//int a,b,c;
//for(a=1;a<=3;a++){
//    for(b=1;b<=3;b++){
//            if(b!=a){
//        for(c=1;c<=3;c++){
//                if(c!=b && c!=a){
//            printf("%d, %d, %d\n",a,b,c);
//                }
//        }
//    }
//}
//
//}
////alternative progressive way
int a,b,c;
for(a=1;a<=5;a++){
    for(b=1;b<=5;b++){
        for(c=1;c<=5;c++){
                if(b!=a && c!=a && c!=b ){
            printf("%d, %d, %d\n",a,b,c);
                }
        }
    }
//}




    return 0;
}
