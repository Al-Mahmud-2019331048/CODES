#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reorder(int n,char x[][12]);

main()
{
  int i,n=0;
  char x[10][12];
    //enter the number of line of text
    char m[100]="\t to continue,press the \"return\"key\n";
    printf("%d\n",strlen(m));
  do{
       printf("%d:",n+1);
       scanf("%s",x[n]);
       }while(strcmp(x[n++],"END"));
    n--;
    reorder(n,x);
    for(i=0;i<n;++i)
        printf("%d: %s\n",i+1,x[i]);

}

void reorder(int n, char x[][12])
{
    char temp[12];
    int i,item;
    for(item=0;item<n-i;++item)
        for(i=item+1;i<n;++i)
            if(strcmp(x[item],x[i])>0){
                strcpy(temp,x[item]);
                strcpy(x[item],x[i]);
                strcpy(x[i],temp);
            }
        return;
}
