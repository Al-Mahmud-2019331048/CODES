#include<stdio.h>
#define SZ 6+7
#define SZ2 SZ+9


int main()
{
int x = 5+6*SZ2*2;
for (; x>0; x>>=1)
printf("%d\n",x);
return 0;
}
