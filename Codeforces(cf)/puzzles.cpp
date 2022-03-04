#include<bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    for (int i = 0; i < m; ++i)
        cin>>v[i];
    sort(v.begin(),v.end());
    if(m==n){
        cout<<v[m-1]-v[0]<<endl;
    }
    else{
        int best=1<<21;
        for (int i = 0; i <= m-n; ++i){
            best=min(best,v[i+n-1]-v[i]);
        }
    
        cout<<best<<endl;
    }
    
    return 0;
}
