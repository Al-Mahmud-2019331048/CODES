#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%4!=0)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            ll i,j;
            vector<int> v(n);
            for (int i = 0; i < n; ++i)
               v[i]=i+1;
            vector<ll>v1(n/2);
            vector<ll> v2(n/2);
            i=1;
            for (j=0; j < n/2 - 1; j+=2)
            {
                v1[j]=v[j];
                v1[j+1]=v[n-j-1];
                i+=2;
            }
            i=1;
            for (j=0; j < n/2 - 1; j+=2)
            {
                v2[j]=v[j+1];
                v2[j+1]=v[n-j-2];
                i+=2;
            }
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            for(i=0;i<n/2;i++)
                cout<<v1[i]<<" ";
            cout<<endl;
            for(j=0;j<n/2;j++)
                cout<<v2[j]<<" ";
            cout<<endl;

        }
    }


    return 0;
}
