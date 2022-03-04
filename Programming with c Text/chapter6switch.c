#include<stdio.h>
int main()
{
char choice;
switch(choice=toupper(getchar())){

case 'R':
    printf("red");
    break;
case 'W':
    printf("white");
    break;
case 'B':
    printf("blue");
    break;
}
return 0;
}
