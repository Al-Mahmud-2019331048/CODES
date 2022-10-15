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

const int inf = 2000000000;
const ll infLL = 9000000000000000000;

void mahmud()
{
    ll n, x, ans = 0, cnt = 1;
    cin >> n;
    vector<ll>v(n);
    int flag1,flag2;
    forn(i,n) cin>>v[i];
    forn(i, n)
    {
        x=v[i];
        if(i%2 ){
            if(i==1) flag1=x%2;
            if(flag1!=x%2){cout<<"NO"<<endl; return;}
        }
        else{
            if(i==0) flag2=x%2;
            if(flag2!=x%2){cout<<"NO"<<endl; return;}
        }
    }
    cout<<"YES"<<endl;
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
