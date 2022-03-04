#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    int n;
    cin>>n;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin>>a;
        v[i]=a;
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; ++i)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}