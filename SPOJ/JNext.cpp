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
	test{
		ll n,temp;
		cin >> n;
		bool flag = 0;
		vector<ll>v(n);
		for (ll i = 0; i < n; ++i)
			cin >> v[i];
		for (auto i = v.end()-1; i != v.begin()-1; --i){
			// cout<<*i<<" "<<*(i-1)<<endl;
			if (*i > *(i - 1)) {
				temp = *(i - 1);
				// cout<<*i<<" "<<*(i-1)<<endl;
				v.erase(i - 1);
				flag = 1;
				break;
			}
		}
		v[n - 1] = temp;
		if(flag==0)
			cout<<-1<<endl;
		else{
			for (int i = 0; i < n; ++i)
				cout<<v[i];
			cout<<endl;
		}
	}

	return 0;
}