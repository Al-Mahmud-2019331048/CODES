#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--){
        ll n,m,x,y,p=0;
        scanf("%lld %lld %lld %lld",&n,&m,&x,&y);
        ll p1=((m-1)+(n-1))*x;
        n=min(n,m);
        m=max(n,m);
        ll p2=(n-1)*y + (m-n)*x;
        p=min(p1,p2);
        printf("%lld\n",p);
    }
    
    return 0;
}
