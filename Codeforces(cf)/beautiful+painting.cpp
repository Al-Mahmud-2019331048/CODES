#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
	ll n,cnt=0;
	cin>>n;
	ll a[n];
	map<ll,ll> mp;
	for (ll i = 0; i < n; ++i)
		cin>>a[i];
	sort(a,a+n);
	for (ll i = 0; i < n; ++i)
	    mp[a[i]]++;
	//cout<<a[n]<<endl;
	while(1)
	{
		bool flag=0;
		for (int i = 1; i <= 1000 ; ++i)
		{
			if(mp[i]){
				if(flag) cnt++;
				flag=1;
				mp[i]--;
			}
		}
		if(flag==0) break;
	}
	cout<<cnt<<endl;
	return 0;
}