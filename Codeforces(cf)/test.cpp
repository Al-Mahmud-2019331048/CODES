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
    int n;
    cin>>n;
    char arr[n+1][n+1];
    char ch,ch1,ch2;
    bool flag=1;
    for (int i = 1; i <= n; ++i)
    	for (int j = 1; j <= n; ++j)
            cin>>arr[i][j];
    ch1=arr[1][1],ch2=arr[1][2];
    //cout<<ch1<<" "<<ch2<<endl;
    for (int i = 1; i <= n; ++i)
    {
    	for (int j = 1; j <= n; ++j)
    	{
    	    ch=arr[i][j];
    		if(ch1==ch2){
    			flag=0;
    			break;
    		}
    		if(i==j || i+j==n+1){
    			// cout<<"*";
    			if(ch!=ch1){
    				flag=0;
    				break;
    			}
    		}

    		else{
    			// cout<<" ";
    			if(ch!=ch2){
    				flag=0;
    				break;
    			}
    		}
    	}
    	// cout<<endl;
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
