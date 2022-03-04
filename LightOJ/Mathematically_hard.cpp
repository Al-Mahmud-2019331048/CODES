///Mahmud48
///CSE,SUST
///01752443577

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

///**************************** M a r c o ****************************///
#define f first
#define s second
#define sz 1000000
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

bool siv[1000000];

int main()
{
	fast();
	memset(siv,1,sizeof(bool));
	siv[0]=siv[1]=1;
	int i,j;
	for (i = 2; i < sz; ++i)
 	{
 		if(siv[i]){
 			//printf("New %d\n",i);
 			for (j =i+i ; j < sz; j+=i)
 				siv[j]=0;
 		}
 	}

	for (ll i = 0; i < 1000000; ++i)
	{
		if(siv[i]==0)
			cout<<i<<endl;
	}
		map<ll, ll>mp;
		ll a, b, cse = 1, ans = 0;
		cin >> a >> b;

		for (ll i = a; i <= b; ++i)
		{
			ll cnt = a;
			for (ll j = 2 ; j * j <= a ; ++j)
			{
				if (siv[j] == 1) {
					while (a % j == 0) {
						a /= j;
						mp[j]++;
					}
				}
			}
			if (a > 1) mp[a]++;
			for (auto x : mp)
			{
				cout << x.f << endl;
				cnt *= (1 - (1 / x.f));
			}
			ans += cnt;
			mp.clear();
		}
		cout << "Case " << cse++ << ": " << ans << endl;

	}

	return 0;
}