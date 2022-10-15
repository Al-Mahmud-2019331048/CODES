#include <bits/stdc++.h>
#define endl '\n'
#define PI acos(-1)
#define sz 200
#define inf 1000000009
#define mod 100000000
#define RUN_FAST ios::sync_with_stdio(false);
using namespace std;

void solve()
{
    int l, w;

    while (cin >> l && cin >> w && (l && w)) {
        // double val = cos(45.0 * PI / 180.0);
        // double ans=0.71428;
        // double x=l/(1+ans);
        double answer=l+w-l/4.0;
        printf("%.4f\n",answer);
    }
}

int main()
{
    RUN_FAST; cin.tie(nullptr);
    solve();
    return 0;
}