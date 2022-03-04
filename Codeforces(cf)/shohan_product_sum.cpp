#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
   vector<ll>v;
    cin>>n;
    if(n==0){ cout<<10<<endl; return 0;}
    else if(n==1) { cout<<1<<endl; return 0;}
    else {
            int cnt=0;
        for(ll i=9;i>=2;i-=1)
        {
            while(n%i==0){
              cnt++;
                n=n/i;
                v.push_back(i);
        }
    }
if(n!=1) cout<<-1<<endl;
else {
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}
}
return 0;
}
