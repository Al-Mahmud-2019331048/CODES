#include<stdio.h>
#include<string.h>
int main()

{
    char text[100];
    int i,length,vowelcount=0;
    printf("enter a line or text:");
    scanf("%[^\n]",text);
    length=strlen(text);
    for(i=0;i<length;i++){
        switch (text[i])
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': vowelcount++;

    }
    printf("total count in the given text are %d\n",vowelcount);
    return 0;
}
