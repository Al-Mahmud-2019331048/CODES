#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t,a,b,div,move;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0)
            cout<<"0"<<endl;
        else{
            div=ceil((a*1.0)/b);
        move=b*div - a;
        cout<<move<<endl;
        }
        
    }


    return 0;
}
