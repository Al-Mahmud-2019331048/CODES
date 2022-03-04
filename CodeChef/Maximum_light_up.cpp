#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t,p,a,b,c,x,y;
    cin>>t;
    while(t--){
        cin>>p>>a>>b>>c>>x>>y;
        //scanf("%lld %lld %lld %lld",&n,&p,&x,&y);
        ll anar=x*a+b;
        ll chakri=y*a+c;
        ll ans=0;
        if(anar<chakri)
            ans=anar;
        else
            ans=chakri;
        cout<<p/ans<<endl;
    }


    return 0;
}
