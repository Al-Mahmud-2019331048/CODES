#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t,n,p,x,y;
    cin>>t;
    while(t--){
        cin>>n>>p>>x>>y;
        //scanf("%lld %lld %lld %lld",&n,&p,&x,&y);
        vector<ll> v(n+1);
        ll a,zero=0,one=0;
        for (ll i = 1; i <= n; ++i){
            //scanf("%lld",&a);
            cin>>a;
            v[i]=a;
        }
        for (ll i = 1; i < p; ++i)
        {
            if(v[i]==0)
                zero++;
            else
                one++;
        }
        ll time=(zero*x) + (one*y) + y;
        //printf("%lld\n",time);
        cout<<time<<endl;
    }


    return 0;
}
