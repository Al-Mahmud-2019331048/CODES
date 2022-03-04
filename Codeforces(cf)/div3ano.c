#include<bits/stdc++.h>
using namespace std;
#define sz       200000
#define ll       long long
#define pb       push_back
#define fastio   {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define test     ll t; cin>>t; while(t--)
int main()
{
test{
ll a,b,x,y,m,n;
cin>>a>>b>>x>>y>>m>>n;
ll aa = abs(a-x);
ll bb = abs(b-y);
ll p = max(b,y);
ll pp = min(b,y);
ll xx = max(a,x);
ll yy = min(a,x);
if(a==x && x==m && n>pp&&n<p)
{
    cout<<aa+bb+2<<endl;
}
else if(b==y && y==n && m>yy && m<xx)
{
    cout<<aa+bb+2<<endl;
}
else{
cout<<aa+bb<<endl;
}
}
}
