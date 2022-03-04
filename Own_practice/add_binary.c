#include<stdio.h>
#include<string.h>
int main()
{
    int a[80],b[80],s[80];
    int c=0,d,i,n;
    for(i=0;a[i]!='\n';i++){
        scanf("%d",&a[i]);
    }
    for(i=0;b[i]!='\n';i++){
        scanf("%d",&b[i]);
    }
    if(strlen(a)>strlen(b)){
        n=strlen(a);
    }
    else
        n=strlen(b);
    for(i=n;i>0;i--){
        d=(a[i]+b[i]+c)/2;
        s[i]=a[i]+b[i]+c-(2*d);
    }

    for(i=n;i>0;i--){
        printf("%d",s[i]);
    }

}
