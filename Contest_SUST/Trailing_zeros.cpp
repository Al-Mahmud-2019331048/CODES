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

ll findTrailingZeros(ll n){
	if(n<0) return -1;
	ll cnt=0;
	for (ll i = 5; i <= n; i*=5)
		cnt+=(n/i);
	return cnt;
}

int main()
{
    fast();
    int T;	cin>>T;
    for (int i = 1; i <= T; ++i)
    {
    	int q;	cin>>q;
    	ll l=0,h=1e18,ans=-1;
    	while(l<=h){
    		ll mid=(l+h)/2;
    		if(findTrailingZeros(mid)>q)
    			h=mid-1;
    		else if(findTrailingZeros(mid)<q)
    			l=mid+1;
    		else{
    			ans=mid;
    			h=mid-1;
    		}
    	}
    	if (ans == -1) printf("Case %d: impossible\n", i);
        else printf("Case %d: %lld\n", i, ans);
    }
    
    
    return 0;
}