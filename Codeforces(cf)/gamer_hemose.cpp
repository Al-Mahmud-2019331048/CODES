#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,h,damage=0,a;
        cin>>n>>h;
        priority_queue<ll>pq;
        for(ll i=0;i<n;i++){
            cin>>a;
            pq.push(a);
        }
        ll x=pq.top();pq.pop();
        ll y=pq.top();
        //cout<<x<<" "<<y<<endl;
        ll cnt=2*(h/(x+y));
        if(h%(x+y)==0){
            cnt+=0;
        }
        else if(h%(x+y)<=x){
            cnt+=1;
        }
        else  //>x
            cnt+=2;
        cout<<cnt<<endl;
       
    }




    return 0;
}
