#include<bits/stdc++.h>
using namespace std;
//mahmud48

int main()
{
	int t,n;
	
	cin>>t;
	while(t--)
	{
		char s[100000];
		int cnt=0;
		scanf("%[^\n]", s);
		
		//cout<<strlen(s)<<endl;

		for (int i = 0; i < strlen(s); ++i)
			cout<<s[i]<<endl;

		for (int i = 0; i < strlen(s); ++i)
		{
			if(s[i]!=' ' && s[i+1]==' ')
				cnt++;
		}
		cout<<cnt<<endl;
		
	}
	
	return 0;
}