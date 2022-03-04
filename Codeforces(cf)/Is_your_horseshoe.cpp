#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    ll x;
    set<ll>s;
    for (int i = 0; i < 4; ++i)
    {
        cin>>x;
        s.insert(x);
    }
    cout<<4-s.size()<<endl;

    return 0;
}