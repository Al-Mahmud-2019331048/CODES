#include <bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
	ll q;
	cin>>q;
	while(q--){
		ll l,r,d,x;
		cin>>l>>r>>d;
		if(d<l){
			cout<<d<<endl;
		}
		else{
			cout<<(r/d + 1)*d<<endl;
		}
	}


	return 0;
}