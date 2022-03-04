#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,cnt=1,people=0;
    cin>>n>>m;
    std::vector<int>v(n);
    for (int i = 0; i < n; ++i)
        cin>>v[i];
    for (int i = 0; i < n ; i++)
    {
        if(people+v[i]<=m)
            people+=v[i];
        else{
            cnt++;
            people=v[i];
        }

    }
    cout<<cnt<<endl;
    
    return 0;
}
