#include<stdio.h>

int main()
{
    int x,y;
    char c;
    FILE *fin,*fout;

    fin=fopen("file_input.txt","r+");
    fscanf(fin,"%c",&c);
    fscanf(fin,"%d %d", &x, &y);
    printf("%c %d %d",c,x,y);

    fclose(fin);
    return 0;
}
