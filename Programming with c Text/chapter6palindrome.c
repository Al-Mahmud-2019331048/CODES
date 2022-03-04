#include<stdio.h>
int main()

{
    int i,n,length=0,flag=1;
    char array[80];

    printf("enter a word or sentence:");
    scanf("%s",array);

    for(i=0;array[i]!='\0';i++){
        length++;
    }
    n=length;
    for(i=0;i<n;i++){
        if(array[i]!=array[n-i-1]) flag=0;
        }

        if(flag) printf("palindrome\n");
        else printf("not palindrome");

        return 0;
}
