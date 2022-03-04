#include<stdio.h>
int main()
{
    int *px,*py;
    int a[6]={1,2,3,4,5,8};
    px=&a[0];
    py=&a[5];
    printf("px=%d py=%d\n",px,py);
    printf("py-px=%d\n",py-px);

    return 0;
}
