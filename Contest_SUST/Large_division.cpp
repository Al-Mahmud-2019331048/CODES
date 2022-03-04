///Mahmud48
///CSE,SUST
///01752443577

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

///**************************** M a r c o ****************************///
#define f first
#define s second
#define endl '\n'
#define pb push_back
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define fora(a) for(auto u:a)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define mem(a,b) memset(a, b, sizeof(a))
#define test int t; cin>>t; while(t--)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///**************************** C o n s t a n t ****************************///
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

int main()
{
	fast();
	int T;
	cin>>T;
	for (int j = 1; j <= T; ++j)
	{
		string s;
		ll b, rem = 0, i = 0;
		cin >> s >> b;
		if (s[0] == '-')  i = 1;
		b = abs(b);
		for ( ; i < s.size(); i++ )
		{
			rem = rem * 10 + (s[i] - '0');
			rem %= b;
		}

		if (rem == 0) cout << "Case " << j << ": divisible" <<'\n';
        else cout << "Case " << j << ": not divisible" <<'\n';
	}

	return 0;
}