#include<stdio.h>
int main()

{
    int i,a[100],max=0,n;
    printf("how many element?\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("a%d=",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
      if(max<a[i]){
        max=a[i];
      }
      else {
        max=max;
      }

    }
    printf("maximum number is  %d",max);

    return 0;
}
