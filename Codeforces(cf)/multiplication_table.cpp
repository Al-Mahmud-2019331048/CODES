#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    ll n,x,ans=0,i;
    cin>>n>>x;
    for ( i = 1; i <= n; ++i)
    {
       if(x%i==0 && x/i<=n)
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}