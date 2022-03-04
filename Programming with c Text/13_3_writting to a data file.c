#include<stdio.h>

int main()
{
    int i;
    FILE *fptr;
    fptr=fopen("output13-3.dat","w+");
    for(i=65;i<=90;i++)
        fprintf(fptr,"%c\n",i);

    fclose(fptr);
    return 0;
}
