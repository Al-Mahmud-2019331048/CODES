#include<bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int find_max_pos(vector<int> v,int n)
{
    int maxi=v[0],posa=0;
    for (int i =1 ; i < n; ++i)
    {
        if(maxi<v[i]){
            posa=i;
            maxi=v[i];
        }
    }
    return posa;
}

int main()
{
    ll n,cnt=0,maxi=0;
    cin>>n;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i)
        cin>>v[i];
    for (ll i = 0; i < n-1 ; ++i)
    {
        if(v[i] <= v[i+1]){
            cnt++;
             maxi=max(cnt,maxi);
         }
        
        else
            cnt=0;

    }
    cout<<maxi+1<<endl;
    

    return 0;
}
