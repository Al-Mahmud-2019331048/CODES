#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define in scanf
#define out printf
#define lin puts("");
#define sz 100000000
int siv[sz]={0}, prime[sz]={0},cnt=0;

int sivee(long long m )
{

    long long n, limit = sqrt(sz+1);
    long long j,i;

    for (i=3; i<=limit;i+=2)
        if(!siv[i])
            for (j = i*i;j<m; j+=i+i)
                siv[j]= 1;
    prime[cnt++]=2;
    for (i=3; i<m; i+=2)
        if(!siv[i])
            prime[cnt++]=i;

    for (i=0; i<cnt; i++)
        printf("%d%c", prime[i],",\n"[i==cnt-1]);
    printf("Total prime = %d\n", cnt);
    //if(i==cnt-1)
       // printf("%d", prime[i]);
    //else
        //printf("%d, ", prime[i]);



}

int main()
{
    long long m, v;
    printf("Enter the limit: ");
    scanf("%lld",&m);
    sivee(m);


    return 0;
}
