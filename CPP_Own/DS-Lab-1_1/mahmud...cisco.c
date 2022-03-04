#include<stdio.h>
#include<string.h>
#define ABC  10
#define XYZ  ABC-1
struct s{
    char s[4];
};

int main()
{
//    int t[4][4];
//    printf("%d\n",sizeof(t)/sizeof(t[0])/sizeof(t[0][0]));
////
//char tt[20]="0123456789";
//strcpy(tt,tt+2);
//printf("%d\n",strlen(tt)-tt[9]+'5');
//
//char *p="\0\4\1\3\2";
//printf("%d\n",p[p[1]]+*(p+1)+p[4]);

int i=1,j=0,k;
k=(i<<j)+(j<<i)+(i<<i)+(j<<j);
k>>=i;
printf("%d\n",k);

//char tt[20]="9081726354";
//strcpy(tt,tt+3);
//printf("%d\n",strlen(tt)-tt[9]+'5');

//int x=1,y=1;
//float k=-1e0,m=2e1;
//printf("%d\n",(x>=y)+(x>=y)+(k>=y)+(m>=k)+('q'<='z'));

//struct s s={'a','b'};
//printf("%d\n",sizeof(s.s)-strlen(s.s)+s.s[3]);
//
//int x;
//x=('r'-'s')*('A'/'Z');
//printf("%d\n",x);

//char *t1[10],(*t2)[10];
//printf("%d\n",(sizeof(t1)==sizeof(t2))+sizeof(t1[0]));

//int i=1,j=2;
//float x=3.0,y=2.0;
//x=(int)x/y + (float)i/j;
//printf("%f\n",x);

//int a=-1,b=1;
//float i=2.0,j=-2.0;
//printf("%d\n",(a>b)+(b>a)+(i>j)+(j>i)+('z'>'a'));

//int i=19;
//i=i-XYZ;
//printf("%d\n",i);
    return 0;
}
