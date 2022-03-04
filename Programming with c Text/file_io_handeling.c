#include<stdio.h>

int main()
{
    char c;
    int x,y;
    FILE *fin=fopen("2021_file.in", "r+"),*fout;

    fscanf(fin,"%c", &c);
    fscanf(fin,"%d %d",&x, &y);
    printf("c=%c  x=%d  y=%d",c,x,y);
    fclose(fin);

    return 0;
}
