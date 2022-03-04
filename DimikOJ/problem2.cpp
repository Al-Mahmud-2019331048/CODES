#include<bits/stdc++.h>

using namespace std;

//mahmud48

int main()
{
	int t,n;
	char ch;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		reverse(s.begin(),s.end());
		//cout<<s[0]<<endl;
		if(((int)s[0])%2)
			cout<<"odd"<<endl;
		else
			cout<<"even"<<endl;


	}
	
	return 0;
}