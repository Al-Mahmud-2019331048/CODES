#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fin,*fout;
    float val,avg,sum=0;
    int i;
    fin=fopen("values_for_avg.txt","r+");
//    if(fin==NULL)
//        printf("Error-Cannot open the designated file\n");
//    else{
        while(!feof(fin)){
            fscanf(fin,"%f",&val);
            sum+=val;
            i++;
//        }
    }
    avg=sum/i;
    fout=fopen("Average_result.dat","w+");
    fprintf(fout,"The average of numbers of file values_for_avg.dat is %.2f",avg);

    fclose(fin);
    fclose(fout);
    getch();
    return 0;
}
