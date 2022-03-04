#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

int main()
{
    int t; cin>>t; while(t--)
    {
        ll n,m,q;
        cin>>n>>m>>q;
        map<char,ll>mp;
        bool ok = 0;
          int c=0;
        for(ll i=0;i<q;i++)
        {
            char ch;
            ll x;
            cin>>ch>>x;
            if(ch=='+'){
               c++;
               mp[x]++;
            }
            else{
                    c--;
            mp[x]--;
            if(mp[x]<0)
                ok=1;
            }
            if(c>m)
                   ok=1;
        }
        if(ok) cout<<"Inconsistent"<<endl;
        else cout<<"Consistent"<<endl;
    }
}
