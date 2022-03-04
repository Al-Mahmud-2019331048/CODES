#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fpt;
    char ch,fname[40];
//    printf("Enter the input File name with extension:\n");
//    gets(fname);
//    if((fpt=fopen(fname,"r+"))==NULL)
    fpt=fopen("output13-3.dat","r+");
    if(fpt==NULL)
        printf("Error-Cannot open the designed file\n");
    else{
        fscanf(fpt,"%c",&ch);
        while(!feof(fpt)){
            printf("%c",ch);
            fscanf(fpt,"%c",&ch);
        }
    }
    fclose(fpt);
    getch();
    return 0;
}

///F:\\CODES\\Programming with c Text\\output13-3
