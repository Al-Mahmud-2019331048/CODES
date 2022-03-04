#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t,m,n,k;
    cin>>t;
    while(t--){
        scanf("%lld %lld %lld",&m,&n,&k);
        ll time=n*k;
        if(m>time)
            printf("YES\n");
        else
            printf("NO\n");

        
    }


    return 0;
}
