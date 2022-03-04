#include <bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
	ll k;
	string s,st;
	cin>>k;
	cin>>s;
	if(k==1){
		cout<<s<<endl;
	}
	else{
		map<char, ll> mp;
		bool flag=1;
		for (int i = 0; i < s.size(); ++i)
			mp[s[i]]++;
		for(auto x : mp){
			if(x.second%k){
				flag=0;
				cout<<"-1"<<endl;
				break;
			}
		}
		if(flag==1){
			for(auto i: mp){
				for(int j=0;j<i.second/k ;j++){
					st+=i.first;
				}
			}
			while(k--)
				cout<<st;
		}
			
		cout<<endl;

	}
	return 0;
}