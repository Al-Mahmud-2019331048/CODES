#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,i;
        cin>>n;
        vector<ll> v(n,0);
        v[0]=1,v[n-1]=5;
        if(n==1)
            cout<<"3";
        else{
            for (i = 0; i < n; ++i)
            cout<<v[i];
        }
        cout<<endl;
    }
    
    return 0;
}
