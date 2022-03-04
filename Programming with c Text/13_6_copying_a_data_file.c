#include<stdio.h>

int main()
{
    FILE *fin,*fout;
    char ch,infile[50],outfile[50];

    printf("Enter the source file name:");
    gets(infile);
    fin=fopen(infile,"r+");


    printf("Enter the desytination file name:");
    gets(outfile);

    fout=fopen(outfile,"a+");

    while(!feof(fin)){
        ch=getc(fin);
        putc(ch,fout);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}

//values_for_avg.txt
//copied_file.dat
