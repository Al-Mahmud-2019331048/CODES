#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int d,l,r,t;
    cin>>t;
    while(t--){
        cin>>d>>l>>r;
        if(d>=l && d<=r)
            cout<<"Take second dose now"<<endl;
        else if(d<l)
            cout<<"Too Early"<<endl;
        else
            cout<<"Too Late"<<endl;
    }
    return 0;
}
