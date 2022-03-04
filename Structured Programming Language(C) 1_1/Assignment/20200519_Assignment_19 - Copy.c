#include<stdio.h>
int main()
{
    int a=7,q,i,j,p,k,m;
    ///there are 25 light:0,1,2........,24.
    scanf("%d",&q);
    for(p=0;p<q;p++){
       scanf("%d",&k);
       switch(k)
        {
       case 1:///1.Turn the i-th light on.
             printf("Enter one integer: ");
        scanf("%d",&i);
        a|=(1<<i);
        break;
       case 2:///2.turn the i-th light off.
             printf("Enter one integer: ");
        scanf("%d",&i);
        if((1<<i)&a)
            a^=(1<<i);
        break;
       case 3:///3.Toggle the i-th light.
             printf("Enter one integer: ");
        scanf("%d",&i);
        a^=(1<<i);

        break;
       case 4:///4.Show the status of i-th light.
           printf("Enter one integer: ");
        scanf("%d",&i);
        printf("show the status of i-th light=%d\n",a&(1<<i));
        break;
       case 5:///5.Show the status of all lights.
        for(i=0;i<25;i++)
            printf("%d",a&(1<<i));
            puts("");
            break;
       case 6:///6.turn the i-th to j-th lights on.
             printf("Enter two integer: ");
        scanf("%d %d",&i,&j);
        a|=(((1<<(j-i+1))-1)<<i);
        break;
       case 7:///7.Turn the i-th to j-th lights off
           printf("Enter two integer: ");
        scanf("%d %d",&i,&j);
        if((((1<<(j-i+1))-1)<<i)&a){
            a^=(((1<<(j-i+1))-1)<<i);
            printf("%d\n",a);}
        break;
       case 9:///9.Toggle all light.
        for(i=0;i<25;i++){
            a^=(1<<i);
           // printf("%d",a);
            }
           // puts("");
        break;
       case 10:///10.Show the status of i-th light to j-th light
           printf("Enter two integer: ");
        scanf("%d %d",&i,&j);
        while(i<=j){
            printf("Show the status of %d-th light =%d\n",i,(1<<i)&a);
            i++;
        }
puts("");
        break;
       default:
        puts("Invalid Query!");
        break;
        }
    }
}
