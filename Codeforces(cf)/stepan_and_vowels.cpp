#include <bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48
//cse19

int main() {
	int n;
	cin>>n;
	string s,s1="";
	cin>>s;
	for (int i = 0; i < n;)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
			int cnt=0;
			while(s[i]==s[i+1]){
				cnt++;
				i++;
			}
			if((s[i]=='o' || s[i]=='e') && cnt==1)
				s1+=s.substr(i-1,2);
			else{
				//cout<<s[i]<<endl;
				s1+=s[i];
			}
			i++;
		}
		else{
			s1+=s[i];
			i++;
		}
	}
	cout<<s1<<endl;
	return 0;
}