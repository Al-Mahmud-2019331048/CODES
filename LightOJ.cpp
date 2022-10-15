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
#define yes printf("YES\n")
#define no printf("NO\n")
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

ll cc = 1;

vector<ll> graph[20005];

int lvl[20005];
bool vis[20005];

void clar(){
    memset(vis,false,sizeof(vis));
    memset(lvl,0,sizeof(lvl));
    for(int i=0;i<=20005;i++){
        graph[i].clear();
    }
}

void dfs(ll st, ll n)
{
    vis[st] = 1;
    lvl[st] = 1;
    queue<ll> q;
    q.push(st);

    while (!q.empty())
    {
        ll u = q.front();
        q.pop();
        for (ll i = 0; i < graph[u].size(); i++)
        {
            if (!vis[graph[u][i]])
            {
                vis[graph[u][i]] = 1;
                lvl[graph[u][i]] = lvl[u] + 1;
                q.push(graph[u][i]);
            }
        }
    }
}

void mahmud()
{
    clar();
    cout << "Case " << cc++ << ": ";
    ll n, m = 1, x = 0, y = 0, a, b;
    cin >> n;
    forn(i, n)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        a = max(a, b);
        m = max(a, m);
    }

    dfs(m,m);

    // forn(i,10){
    //     cout<<lvl[i]<<" ";
    // }
    // cout<<endl;

    for(ll i=1;i<=m;i++){
        if(lvl[i] and lvl[i]%2) x++;
        else if(lvl[i] and lvl[i]%2==0) y++;
    }
    cout<<max(x,y)<<endl;
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