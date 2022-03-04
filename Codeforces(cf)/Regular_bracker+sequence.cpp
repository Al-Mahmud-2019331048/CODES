#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        for (int i = 0; i < n; ++i)
            s+="()";
        cout<<s<<endl;
        for(int i=1;i<n;i++){
            //cout<<s.substr(0,i)<<s.substr(i,2*n-2*i)<<s.substr(2*n-i,i)<<endl;
            //<<s.substr(0,i)<<s.substr(2*i,2*n-1)<<s.substr(2*n-i,i)<<endl;
            for(int j=1;j<=i;j++)
                cout<<"(";
            for (int k = 1; k <=n-i; ++k)
                cout<<"()";
            for (int l = 1; l <=i ; ++l)
                cout<<")";
            cout<<endl;
        }
    }
    return 0;
}