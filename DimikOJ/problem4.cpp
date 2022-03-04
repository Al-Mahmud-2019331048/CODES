#include<bits/stdc++.h>
using namespace std;
//mahmud48

int main()
{
	int t,n;
	cin>>t;
	for (int j = 1; j <= t; ++j)
	{
		cin>>n;
		cout<<"Case "<<j<<": ";
		for (int i = 1; i < n; ++i)
		{
			if(n%i==0)
				cout<<i<<" ";
		}
		cout<<n<<endl;
	}
	
	return 0;
}