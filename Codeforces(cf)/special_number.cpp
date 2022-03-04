#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod=1e9+7;


int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll ans=0,pn[32];
		pn[0]=1;
		for (int i = 1; i < 32; ++i)
		{
			pn[i]=(pn[i-1]*n)%mod; //n er power,[n^0,n^1...]
		}
		for (int i = 0; i < 32; ++i)
		{
			ans+=(pn[i]*((k & (1<<i))!=0));  //k er jonno kon kon ghor e 1 hbe sei index er value add korbo
											//like 17 er jonno 10001
				ans%=mod;
		}
		cout<<ans<<endl;

	}
	return 0;
}