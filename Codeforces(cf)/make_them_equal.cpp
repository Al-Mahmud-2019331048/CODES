#include <bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n,cnt=0;
		char c;
		cin>>n>>c;
		char s[n];
		for (ll i = 0; i < n; ++i)
			cin>>s[i];
		for (int i = 0; i < n; ++i)
			if(s[i]==c)
				cnt++;
		if(cnt==n){
			cout<<0<<endl;
		}
		else{
			bool flag=0;
			ll ans;
			for (ll i = n-1; i >= n/2; --i)
			{
				if(s[i]==c){
					flag=1;
					ans=i;
					break;
				}
			}
			if(flag){
				cout<<1<<endl;
				cout<<ans+1<<endl;
			}
			else{
				cout<<2<<endl;
				cout<<n<<" "<<n-1<<endl;
			}
		}

	}
	return 0;
}