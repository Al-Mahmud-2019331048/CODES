#include<bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
    int n,a,ans=0;
    map<int,int>m;
    for (int i = 0; i < n; ++i)
    {
        cin>>a;
        m[a]++;
        ans=max(ans,m[a]);
    }
    cout<<ans<<endl;
    return 0;
}
