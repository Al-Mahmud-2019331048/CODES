#include<stdio.h>
#include<ctype.h>

#define EOL '\n'
#define TRUE 1
#define FALSE 0

void main()
{
    int n,i,flag,count,tag,countback;
    char text[100];
    printf("Number of line:");
    scanf("%d",&n);
    while(n--){
            flag=TRUE;
        for(count=0;(text[count]=getchar()) != EOL ;count++) ;

        tag=count-1;

        for((i=0,countback=tag);i<=tag/2;(i++,countback--)){
            if(text[i]!=text[countback]){
                flag=FALSE;
                break;
            }
        }

        for(int i=0;i<=tag;i++) putchar(text[i]);
        if(flag) printf(" is a palindrome\n");
        else printf(" is not a palindrome\n");
    }

}
