#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,p1,p2,p3,p4,maximum;
    printf("Enter four numbers:\n");
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    p1=a*c;
    p2=a*d;
    p3=b*c;
    p4=b*d;
    maximum=max(max(p1,p2),max(p3,p4));
    printf("Product max: %lld",maximum);
    return 0;
}
