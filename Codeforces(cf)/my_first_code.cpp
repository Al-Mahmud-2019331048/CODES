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

bool prime[N+5];
void primenire()
{
    int i, j;
    prime[0]=true;
    prime[1]=true;
    for(i=4; i<=N; i+=2)
    {
        prime[i]=true;
    }
    for(i=3; i*i<=N; i+=2)
    {
        if(!prime[i])
        {
            for(j=i*i; j<=N; j+=i)
            {
                prime[j]=true;
            }
        }
    }
    vector<ll>v;
    for(ll i=0;i<=N;i++)
    {
        if(prime[i]==0)
        {
            v.pb(i);
        }
    }

//   cout<<v[n-1]<<endl;
}


vector<int> node[100003];
int vis[100003];
int dis[100003];
ll cnt,ans;
void dfs(int x)
{
    cnt++;
    vis[x]=1;
    for(int i=0;i<node[x].size();i++)
    {
        int tmp=node[x][i];
        if(!vis[tmp])
        {
            dfs(tmp);
        }
    }
}
ll big_mod(ll base, ll power)
{
    if(power == 0)return 1;
    ll h = big_mod(base, power / 2);
    h = (h * h) % mod;
    if(power % 2 )h = (h * base) % mod;
    return h;

}


int main()
{
    test{
        ll n;
        cin>>n;
        ll a[2*n+1];

        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }

        int even=0,odd=0;

        for(int j=0;j<2*n;j++){
            if(a[j]%2==0) even++;
            else odd++;
        }

        if(even==odd) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;

}
