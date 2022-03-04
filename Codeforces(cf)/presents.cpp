#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    int n;
    cin>>n;
    map<int,int>m;
    for (int i = 1; i <= n; ++i)
    {
        int p;
        cin>>p;
        m[p]=i;
        
    }
    for (auto i : m )
        cout<<i.second<<" ";
    cout<<endl;
    return 0;
}