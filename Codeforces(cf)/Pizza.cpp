#include <bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
	ll n;
	cin>>n;
	if(n==0)
		cout<<0<<endl;
	else if((n+1)%2)
		cout<<n+1<<endl;
	else
		cout<<(n+1)/2<<endl;
	
	return 0;
}