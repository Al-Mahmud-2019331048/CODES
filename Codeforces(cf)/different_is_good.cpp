#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    ll n;
    set<char>s;
    cin>>n;
    string c;
    cin>>c;
    for (int i = 0; i < n; ++i)
        s.insert(c[i]);
    //cout<<c.size()<<endl;
    //cout<<s.size()<<endl;

    ll l=n-s.size();
    n>26? cout<<"-1":cout<<l<<endl;
    //if n>26,distinct element don't possible

    return 0;
}