#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
int main(){
int n,i,sum=0;
printf("Please Enter Your Entry numbers (Not Exceeding 300): ");
scanf("%d",&n);
char s[300][50];
int arr[300];
for(i=0;i<n;i++){
    scanf("%s %d",&s[i],&arr[i]);


}

printf("\nVoucher:\n");
printf("%-2s%-50s    %6s\n","Srl.","Name","Price");
sum=0;

for(i=0;i<n;i++){
    printf("%03d.%-50s    %6d\n",i+1,s[i],arr[i]);
    sum+=arr[i];
}
i=0;
while(i++!=100){
    putchar('-');
}
puts("");
printf("%9s    %51d","Total",sum);


return 0;
}
