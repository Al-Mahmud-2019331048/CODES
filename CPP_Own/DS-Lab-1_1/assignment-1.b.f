#include<stdio.h>

main()
{
    int i,x=1,y=1,z=1;
    clrscr();
    i=++x||++y&&++z;
    printf("%d %d %d %d",i,x,y,z);
    getch();

}
