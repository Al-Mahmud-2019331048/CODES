#include<stdio.h>
/**
n:L,C,R
1.n-1:L,R,C
2.move n-th dick from L to R
3.n-1:C,L,R
*/
void tower(int n,char L,char C,char R)
{
    if(n==0) return;
    tower(n-1,L,R,C);
    printf("disc %d  from %c  to %c\n",n,L,R);
    tower(n-1,C,L,R);
}
int main()

{
    freopen("20211702_toh.in","r+",stdin);
    freopen("20211702_toh.out","w+",stdout);
    int n;
    while(~scanf("%d",&n)){
        printf("Solution for n=%d\n",n);
        tower(n,'L','C','R');
    }
}
