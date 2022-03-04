///********************** Bismillahir Rahmanir Rahim *****************///


///Mahmud48
///CSE,SUST
///01752443577


#include<bits/stdc++.h>
using namespace std;

///*********************** Template Start Here ***********************///
///************************ C o n t a i n e r ************************///
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int>::iterator vit;
typedef set<int> si;
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
typedef pair<int, string> pis;
typedef pair<string, string> pss;

///**************************** M a r c o ****************************///
#define f first
#define s second
#define endl '\n'
#define sp <<" "<<
#define pb push_back
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define fora(a) for(auto u:a)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define mem(a,b) memset(a, b, sizeof(a))
#define test int t; cin>>t; while(t--)
#define forn(i,n) for(auto i=0; i<n; i++)
#define printm(a) {for(auto u:a) cout<<u.f sp u.s<<endl;}
#define printv(a) {for(auto u:a) cout<<u<<" "; cout<<endl;}
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file(); freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fori(a,b,c) {for(a = c.begin(); a!=b; a++) cout<< *a<< " "; cout<<endl;}
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

///**************************** C o n s t a n t ****************************///
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

ll fact(int n){
    ll f=1;
    for (int i = 1; i <= n; ++i)
    {
        f*=i;
    }
    return f;
}

int number_of_divisor(int m)
{
	vector<int> v;
    ll cnt=0;
	for (int i = 1; i*i <= m; ++i)
	{
		if(m%i==0){
            if(i*i==m)
                cnt++;
            else
                cnt+=2;
			//v.pb(i);
			//v.pb(m/i);
		}

	}
	//cout<<"yes"<<endl;
	return cnt;
}

int main()
{
    fast();
    test{
        int m,n,cnt=0;
        cin>>m>>n;

        ll gc=__gcd(m,n);
        ll ans=number_of_divisor(gc);

        cout<<ans<<endl;
        
/*
        std::vector<int> vm;
        std::vector<int> vn;
        if(m>=n){
        	vn=divisor(n);
        	for (int i = 0; i < vn.size(); ++i)
        	{
        		if(m%vn[i]==0)
        			cnt++;
        	}
        	cout<<cnt<<endl;
        }
        else{
        	vm=divisor(m);
        	for (int i = 0; i < vm.size(); ++i)
        	{
        		if(n%vm[i]==0)
        			cnt++;
        	}
        	cout<<cnt<<endl;
        }
*/
       
    }
    return 0;
}