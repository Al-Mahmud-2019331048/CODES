#include <bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n==1)
			cout<<"0"<<" "<<"1"<<endl;
		else
			cout<<-(n-1)<<" "<<n<<endl;

	}
	return 0;
}