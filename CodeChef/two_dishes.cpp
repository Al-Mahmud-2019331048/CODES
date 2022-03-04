#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll n,a,b,c,t;
    cin>>t;
    while(t--){
        cin>>n>>a>>b>>c;
        ll dish=0;
        if(a>=b){
            dish=b;
            a-=b;
            b=0;
        }
        else{
            dish=a;
            b-=a;
            a=0;
        }

        if(c>=b){
            dish+=b;
            //c-=b;
            //b=0;
        }
        else{
            dish+=c;
            //b-=c;
            //c=0;
        }
        if(dish>=n)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }


    return 0;
}
