#include<stdio.h>

int main()
{
    int x[10],y[10][20],z[10][20][30];
    x[0]=6,x[5]=4;
    y[0][0]=5,y[3][0]=9,y[3][5]=15;
    z[0][0][0]=1,z[6][0][0]=12,z[6][9][0]=51,z[6][9][13]=45;
    printf("x=%d, y=%d, z=%d\n",x,y,z);
    printf("x=%d, y=%d, z=%d\n",x+1,y+1,z+1);

    printf("x=%d, y=%d, z=%d\n",x+5,y+3,z+6);
    printf("x=%d, y=%d, z=%d\n",*(x+5),*(y+3),*(z+6));
         //x er minimum element e dhuke gice!
    printf("y=%d, z=%d\n",*(y+3)+5,*(z+6)+9);
    printf("y=%d, z=%d\n",*(*(y+3)+5),*(*(z+6)+9));
         //y er minimum element e dhuke gice!
    printf("z=%d\n",*(*(z+6)+9)+13);
    printf("z=%d\n",*(*(*(z+6)+9)+13));
      //or,
    printf("z=%d\n",(*(*(z+6)+9))[13]);  //z[6][9][13]        //z er minimum element e powse gelo!


    return 0;
}
