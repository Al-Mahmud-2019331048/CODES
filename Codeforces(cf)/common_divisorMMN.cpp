#include<bits/stdc++.h>
#define ll unsigned long long
#define pb push_back
#define pi acos(-1)
#define INF 1e18
#define mahmud48 ios::sync_with_stdio(0);cin.tie(nullptr);
#define MOD 1000000007
#define popb pop_back()
#define popf pop_front()
#define revers(x) reverse(x.begin(),x.end())
#define fo(i,a,n) for(i=a;i<n;i++)
using namespace std;
ll t, n, i, j, k, c, d, p, q, r, x, y, z, m, cnt, flag, ans, u, v, w;
string s;
ll gcd(ll a, ll b)
{
	return b == 0 ? a : gcd(b, a % b);
}
ll findGcd(vector<ll>&v)
{
	ll result = v[0];
	for (i = 1; i < v.size(); i++)
	{
		result = gcd(v[i], result);
		if (result == 1)
		{
			return 1;
		}
 
	}
	return result;
}
void mahmud()
{
	cin >> n;
	vector<ll>v(n);
	for (i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	ans = findGcd(v);
	cnt = 0;
	for (i = 1; i * i <= ans; i++)
	{
		if (i * i == ans)
			cnt++;
		else if ( ans % i == 0)
			cnt += 2;
	}
	cout << cnt;
 
}
int main()
{	mahmud48 //cin>>t;while(t--)
	mahmud();
}