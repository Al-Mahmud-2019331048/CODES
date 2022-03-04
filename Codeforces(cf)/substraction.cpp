#include <bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
	ll n;
	cin>>n;
	while(n--){
		ll a,b,c,mul;
		cin>>a>>b;
		ll cnt=0;
		
		while(1){
			c=a;
			a=max(a,b);
			b=min(c,b);
			//cout<<a<<" "<<b<<endl;
			if(b!=0)
				mul=a/b;
				//cout<<mul<<endl;
			a=a-mul*b;
			cnt+=mul;
			if(a==0 || b==0)
				break;
		}
		cout<<cnt<<endl;
	}
	return 0;
}