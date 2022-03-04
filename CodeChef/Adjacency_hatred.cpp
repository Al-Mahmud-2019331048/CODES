#include<bits/stdc++.h>
using namespace std;
#define sz       200000
#define ll       long long
#define pb       push_back
#define pi       2*acos(0.0)
#define f        first
#define s        second
#define mod      1000000007
#define fastio   {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define test     ll t; cin>>t; while(t--)
const int N = 1e6;



int main()
{
  test{
  ll n; cin>>n;
  ll a[n+1];
  ll even=0, odd=0;
  vector<ll>v,vv,vvv;
  for(ll i=0;i<n;i++){
    cin>>a[i];
}
//sort(a,a+n);
for(ll i=0;i<n;i++){
    if(a[i]%2){
        v.pb(a[i]);
        odd++;
    }
    else{
        vv.pb(a[i]);
        even++;
    }
  }
  if(even==0&&odd>0 || odd==0&&even>0){
    cout<<-1<<endl;
  }
  else{
   for(ll i=0;i<n;i++){
    if(a[i]%2!=0){
        cout<<a[i]<<" ";
    }
   }
    for(ll i=0;i<n;i++){
    if(a[i]%2==0){
        cout<<a[i]<<" ";
    }
   }
   cout<<endl;
  }
 
  }
}