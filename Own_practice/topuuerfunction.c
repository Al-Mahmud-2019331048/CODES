#include<stdio.h>
#include<string.h>
char lower_to_upper(char text[])
{
    int i,length;
    char fix[100];
//    for(i=0;text[i]!='\0';i++){
//        length++;
//    }
length=strlen(text);
//printf("length:%d\n",length);
    for(i=0;i<length;i++){
        if(text[i]>='a'  &&  text[i]<='z'){
           fix[i]='A'+text[i]-'a';
        }
        else {
            fix[i]=text[i];
        }
       printf("%c",fix[i]);
    }
 printf(" ");
}

int main()
{
   char line[100],upline[100];
   printf("Enter a text:");
  while(scanf("%s",line)==1){
   lower_to_upper(line);
  }
   return 0;
}
