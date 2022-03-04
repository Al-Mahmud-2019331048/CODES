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

vector< pair<int,int> > v(1001);

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
	if(a.s==b.s)
		return(a.f>b.f);
	return(a.s<b.s);
}
 

int number_of_divisor(int n){
	int cnt=0;
	for (int i = 1; i*i <= n; ++i)
	{
		if(n%i==0){
			if(n/i==i)
				cnt++;
			else
				cnt+=2;
		}

	}
	return cnt;
}

int main()
{
    fast();
    int ans[1001];
    for (int i = 1; i <=1000; ++i)
    	v[i].f=i,v[i].s=number_of_divisor(i);
    sort(v.begin(), v.end(),sortbysec);
    // for (int i = 1; i < v.size(); ++i)
    	// cout<<v[i].f<<"="<<v[i].s<<endl;
    int n,cse=1;
    test{
    	cin>>n;
    	cout<<"Case "<<cse<<": "<<v[n].f<<endl;
    	cse++;
    }
    
    return 0;
}