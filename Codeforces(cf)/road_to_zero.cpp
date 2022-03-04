#include <bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll a,b,x,y;
		cin>>x>>y;
		cin>>a>>b;
		ll tk=0;
		
		if(2*a > b){
			tk=abs(y-x)*a+min(x,y)*b;
		}
		else
			tk=(x+y)*a;
		cout<<tk<<endl;
	}
	return 0;
}