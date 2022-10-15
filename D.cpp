///********************** Bismillahir Rahmanir Rahim *****************///

/*
 * @Author            : Mahmud
 * @Organization      : CSE,SUST
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define f first
#define s second
#define endl '\n'
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define forn(i, n) for (auto i = 0; i < n; i++)
#define fast()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000000 + 7
///**************************** C o n s t a n t ****************************///
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void mahmud()
{
    ll n,len,m,ans = 0,k;
    cin>>n>>k;
    string s; cin>>s;
    vector<ll>vv(n+1,0);
    for(ll i=1;i<=n;i++)
        vv[i]=vv[i-1]+ ll(s[i-1]=='W');
    ans=infLL;
    for(ll i=k;i<=n;i++)
        ans=min(ans,vv[i]-vv[i-k]);
    cout<<ans<<endl;
}

int main()
{
    fast();
    test
    {
        mahmud();
    }
    return 0;
}