#include<stdio.h>
int main()
//#include<ctype.h>
//#define EOL
{
    char letter[80];
    int tag ,i;
    letter[i]=getchar();

    while(letter[i]!= EOF){
       toupper(letter[i]);
        i++;
    }

   i=0;
    while(i<9){
        putchar(toupper(letter[i]));
      i++;
    }
    letter[i]='\n';
    return 0;
}
