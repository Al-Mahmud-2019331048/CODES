#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

std::vector<int> v(105);

int main()
{
    int n,x;
    cin>>n;
    std::map<int,int> m;
    int ans=0;
    for (int i = 1; i <= n; ++i)
    {
        cin>>x;
        m[x]++;
        ans=max(ans,m[x]);
    }
    
    
    cout<< ans <<endl;
    return 0;
}
