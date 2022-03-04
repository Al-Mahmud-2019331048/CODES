#include<stdio.h>
#include<stdlib.h>
#define maxrows 20
//function prototype
void readinput(int *a[maxrows],int nrows,int ncols);
void computesums(int *a[maxrows],int *b[maxrows],int *c[maxrows],int nrows,int ncols);
void writeoutput(int *c[maxrows],int nrows,int ncols);

void main()
{
    int row,nrows,ncols;
    int *a[maxrows],*b[maxrows],*c[maxrows];
    printf("How many rows? ");
    scanf("%d",&nrows);
    printf("How many columns? ");
    scanf("%d",&ncols);
    //allocate initial memory
    for(row=0;row<nrows;row++){
        a[row]=(int*)malloc(sizeof(int)*ncols);
        b[row]=(int*)malloc(sizeof(int)*ncols);
        c[row]=(int*)malloc(sizeof(int)*ncols);
    }
    printf("\nFirst table:\n");
    readinput(a,nrows,ncols);
    printf("\nSecond table:\n");
    readinput(b,nrows,ncols);

    computesums(a,b,c,nrows,ncols);
    printf("\nSum of the elements:\n");
    writeoutput(c,nrows,ncols);
}
void readinput(int *a[maxrows],int m,int n)
{
    int row,col;
    for(row=0;row<m;row++){
//        printf("enter data for row number: %2d\n",row+1);
        for(col=0;col<n;col++){
            scanf("%d",*(a+row)+col);
        }
    }
    return;
}
void computesums(int *a[maxrows],int *b[maxrows],int *c[maxrows],int m,int n)
{
    int row,col;
    for(row=0;row<m;row++){
        for(col=0;col<n;col++){
            *(*(c+row)+col)=*(*(a+row)+col)+*(*(b+row)+col);
        }
    }
    return;
}
void writeoutput(int *a[maxrows],int m,int n)
{
    int row,col;
    for(row=0;row<m;row++){
        for(col=0;col<n;col++){
            printf("%3d",*(*(a+row)+col));
        }
        printf("\n");
    }
    return;
}

//first table
//2 3 0 5
//3 3 1 4
//9 2 6 1
//1 2 1 2
////second table
//1 2 0 3
//1 1 0 9
//1 3 6 2
//6 1 5 10
