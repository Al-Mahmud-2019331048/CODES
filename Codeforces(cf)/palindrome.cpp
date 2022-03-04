#include <bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
	string s;
	cin>>s;
	int cnt=0;
	int n=s.size();
	for (int i = 0; i < n/2 ; ++i)
	{
		//cout<<s[i]<<" "<<s[n-i-1]<<endl;
		if(s[i] != s[n-i-1])
			cnt++;
		/*
		if(cnt>1){
			cout<<"NO"<<endl;
			break;
		}
		*/
	}
	//cout<<cnt<<endl;
	if(cnt>1)
		cout<<"NO"<<endl;
	else if(!(n%2) && cnt==0)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}