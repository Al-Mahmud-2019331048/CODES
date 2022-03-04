#include<bits/stdc++.h>
using namespace std;
//mahmud48

int main()
{
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		i=n%10;
		j=n/10000;
		//cout<<i<<" "<<j<<endl;
		cout<<"Sum = "<<i+j<<endl;
		
	}
	
	return 0;
}