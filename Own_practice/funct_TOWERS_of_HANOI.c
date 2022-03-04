#include<stdio.h>
void transfer(int n,char from,char to,char temp)
//    transfer n disks from one pole to another
//    n=number of disc
//    from=origin
//    to=destination
//    temp=temporary storage
{
    if(n>0){
        transfer(n-1,from,temp,to);
    printf("Move disc %d from %c to %c\n",n,from,to);
    transfer(n-1,temp,to,from);
    }
    return;
}
main()
{
    int n;
    printf("Welcome to the TOWERS OF HINOI\n\n");
    printf("How many disks? ");
    scanf("%d",&n);
    printf("\n");
    transfer(n,'L','R','C');
}
