#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

ll gcd(ll a,ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(nullptr);
    ll n,cnt=0,a,ans;
    scanf("%lld",&n);
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i){
        scanf("%lld",&v[i]);
    }
    //sort(v.begin(),v.end());
    ans=v[0];
    for (ll  i = 1; i < n; ++i){
        ans=gcd(v[i],ans);
        if(ans==1)
            break;
    }
    for (ll i = 1; i*i <= ans; ++i)
    {
        if (i * i == ans)
            cnt++;
        else if ( ans % i == 0)
            cnt += 2;
    }

    printf("%lld\n",cnt);

    return 0;
}