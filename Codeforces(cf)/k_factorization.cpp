#include<bits/stdc++.h>
#define ll long long
using namespace std;

//O(sqrt(n))
vector<ll> factor(ll n){
    vector<ll> v;
    for(ll i=2;i*i<=n;i++)   //i<sqrt(n)
        if(n%i==0){
            while(n%i==0){
                n/=i;
                v.push_back(i);
            }
        }
        if(n!=1) v.push_back(n);
        return v;
}


int main()
{
    ll n,k,pro=1;
    cin>>n>>k;
    vector<ll> a;
    a=factor(n);
    //for (int i = 0; i < a.size(); ++i)
       // cout<<a[i]<<" ";
    if(a.size()<k)
        cout<<"-1"<<endl;
    else{
        for (ll i = 0; i < k-1; ++i){
            cout<<a[i]<<" ";
            pro*=a[i];
        }
        cout<<n/pro<<endl;
    }
    
    return 0;
}
