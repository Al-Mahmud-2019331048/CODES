#include <bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n;
		priority_queue<ll , vector<ll>, greater<ll> >p;
		for (ll i = 0; i < n; ++i)
		{
			cin>>x;
			p.push(x);
		}
		if(n==1)
			cout<<0<<endl;
		else{
			ll cost=0;
			while(p.size()>1)
			{
				ll tmp=p.top();
				p.pop();
				tmp+=p.top();
				p.pop();
				cost+=tmp;
				p.push(tmp);
			}
			cout<<cost<<endl;
			p.pop();
		}
		
		
	}
	

	return 0;
}