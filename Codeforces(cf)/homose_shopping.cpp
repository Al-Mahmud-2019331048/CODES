#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,x,a;
        cin>>n>>x;
        vector<ll> v(n),v1(n);
        for(ll i=0;i<n;i++)
            cin>>v[i];
        v1=v;
        ll flag=1;
        sort(v1.begin(),v1.end());
        for (ll i = n-x; i < x; ++i){
            if(v[i] != v1[i]){
                flag=0;
                break;
            }
        }
        
        flag ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
   

    return 0;
}
