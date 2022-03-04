#include<bits/stdc++.h>

using namespace std;

//mahmud48

int main()
{
    int n,h,cnt=0,width=0;
    cin>>n>>h;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    //sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
        if(h<v[i])
            cnt++;
    width=n+cnt;
    cout<<width<<endl;

    return 0;
}
