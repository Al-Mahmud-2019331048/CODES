#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
    ll n,x,y,cnt=0;
    cin>>n;
    map<ll,ll>m1,m2;
    for (int i = 0; i < n; ++i)
    {
        cin>>x>>y;
        m1[x]++;m2[y]++;
    }
    for (int i = 0; i <= 100; ++i)
    {
        cnt+=m1[i]*m2[i];
    }
        
    cout<<cnt<<endl;
    return 0;
}
