#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t,n,p,x,y;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll flip=0;
        if(s[0]=='0')
            flip++;
        for (ll i = 0; i < s.size()-1; ++i)
        {
            if(s[i]!=s[i+1])
                flip++;
        }
        cout<<flip<<endl;
    }


    return 0;
}
