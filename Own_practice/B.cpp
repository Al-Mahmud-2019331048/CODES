///********************** Bismillahir Rahmanir Rahim *****************///

/*
 * @Author            : Mahmud
 * @Organization      : CSE,SUST
 */

// #include <bits/stdc++.h>
#include<iostream>
#include<cmath>
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

void mahmud()
{
    ll n, ans = 0, a, b, c, k;
    cin >> n;
    char arr[n + 1][n + 1];
    k=n;
    for (ll i = 1; i <= n+1; i++)
    {
        for(ll j=0;j<k;j++) cout<<' '<<' ';
        k--;
        for (ll j = 1; j <= i; j++)
        {
            cout<<(j-1);
            if(i!=1) cout<<' ';
        }
        for (ll j = i-1; j > 0; j--)
        {
            cout<<(j-1);
            if(j!=1) cout<<' ';
        }
        cout<<endl;
    }
    k+=2;
    for (ll i = n; i > 0; i--)
    {
        for(ll j=0;j<k;j++) cout<<' '<<' ';
        k++;
        for (ll j = 1; j <= i; j++)
        {
            cout<<(j-1);
            if(i!=1) cout<<' ';
        }

        for (ll j = i-1; j > 0; j--)
        {
            cout<<(j-1);
            if(j!=1) cout<<' ';
        }

        cout<<endl;
    }

}

int main()
{
    fast();
    // test
    {
        mahmud();
    }

    return 0;
}
