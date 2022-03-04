#include<bits/stdc++.h>

using namespace std;

//mahmud48
map<int,int>mp;

int main()
{
    long long n;
    int i,j=0,cnt=0;
    cin>>n;
    
    /*vector<int>v(n);
    for(i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(i=0;i<n;i++){
        if(v[i]!=i+1)
            j++;
    }
    cout<<j<<endl;
    */

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    for( int i=1;i<=n;i++){
        if(mp[i]==0)
            cnt++;
    }
    cout<<cnt<<endl;


    return 0;
}
