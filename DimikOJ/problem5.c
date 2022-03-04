#include<bits/stdc++.h>
using namespace std;
//mahmud48

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				cout<<"*";
				if(j==n)
					cout<<endl;
			}
		}
		if(t!=0)
			cout<<endl;
	}
	
	return 0;
}