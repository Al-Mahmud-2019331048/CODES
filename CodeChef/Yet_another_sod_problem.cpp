#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t,l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        if(l%3==0)
            cout<<(r/3)-(l/3)+1<<endl;
        else
            cout<<(r/3)-(l/3)<<endl;
        
        
    }


    return 0;
}
