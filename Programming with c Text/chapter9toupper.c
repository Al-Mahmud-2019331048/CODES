#include<stdio.h>
#include<ctype.h>
#define size 80

int main()
{
    char array[size];

    int i;
    for(i=0;i<size;i++){
        array[i]=getchar();
    }
    for(i=0;i<size;i++){
        putchar(toupper(array[i]));
    }
return 0;
}
