#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, t;
	cin >> t;
	while (t--) {
		cin >> n;
		string s1, s2;
		cin >> s1;
		cin >> s2;
		int cnt = 0, tern = 0;
		bool flag = 1;
		if (s1 == s2)
			flag=1;
		else {
			char ch1,ch2;
			for (int i = 0; i < n; ++i)
			{
				if(s1[i]!=s2[i]){
					ch1 = s1[i], ch2 = s2[i];
					break;
				}
			}
			for (int i = 0; i < n; ++i)
			{
				//cout<<s1[i]<<" "<<s2[i]<<endl;
				if (s1[i] != s2[i]) {
					cnt++;
					if(cnt>1){
						if(ch1==s1[i] && ch2==s2[i])
							flag=1;
						else
							flag=0;
						break;
					}
				}
			}
			if(cnt==1)
				flag=0;
		}


		if (flag)
			cout << "Yes" << "\n";
		else
			cout << "No" << '\n';

	}
	return 0;
}