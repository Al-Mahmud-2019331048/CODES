#include<bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
	int t;
	cin>>t;
	while(t--){
			int n;
			string s;
			cin>>s;
				n=s.size();
				int ans=n;
				for (int i = 0; i < n ; ++i)
				{
					for (int j = i+1 ; j < n; ++j)
					{
						int number=(s[i]-'0')*10+int(s[j]-'0');  //'0'=48
						if(number%25==0)   //ij=00 or 25 or 50 or 75
							ans=min(ans,(j-i-1)+(n-1-j));  //1----i-----j-----n
					}
				}
				cout<<ans<<endl;
			}
		return 0;
}