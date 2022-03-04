#include<stdio.h>
#include<ctype.h>
void scan_line(char line[],int *pv,int *pc,int *pd,int *pw,int *po);

void main()
{
    char line[80];
    int vowels=0,consonants=0,digits=0,whitespc=0,other=0;
    printf("Enter a line of text below:\n");
    scanf("%[^\n]",line);
    scan_line(line,&vowels,&consonants,&digits,&whitespc,&other);
    printf("No. of vowels : %d\n",vowels);
    printf("No. of consonants: %d\n",consonants);
    printf("No. of digits: %d\n",digits);
    printf("No. of whitespace: %d\n",whitespc);
    printf("No. of other characters: %d\n",other);
    return ;
}
void scan_line(char line[],int *pv,int *pc,int *pd,int *pw,int *po)
{
    char c;
    int count;
    while((c=toupper(line[count])) != '\0'){
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            ++ *pv;
        else if(c>='A' && c<='Z')
            ++ *pc;
            else if(c>='0' && c<='9')
                ++ *pd;
                else if(c==' ' || c=='\t')
                    ++ *pw;
                    else
                        ++ *po;
       ++ count;
    }
    return;
}
