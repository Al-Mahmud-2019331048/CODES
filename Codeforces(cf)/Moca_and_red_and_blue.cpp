#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pi acos(-1)
#define INF 1e18
#define MN7 ios::sync_with_stdio(0);cin.tie(nullptr);
#define MOD 1000000007
#define popb pop_back()
#define popf pop_front()
#define revers(x) reverse(x.begin(),x.end())
#define fo(i,a,n) for(i=a;i<n;i++)
using namespace std;
ll t, n, i, j, k, a, b, c, d, p, q, r, x, y, z, m, cnt, flag, ans,u,v,w;
string s;
void mahmud()
{
	cin>>n;
	cin>>s;
	x=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='?')
			x++;
	}
	if(x==n)
	{
		for(i=0;i<n;i+=2)
		{
			s[i]='B';


		}
	}

	for(i=n-1;i>0;i--)
	{
		if(s[i]=='B' && s[i-1]=='?')
		{
			s[i-1]='R';
		}
		else if(s[i]=='R'&& s[i-1]=='?')
		{
			s[i-1]='B';
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(s[i]=='B' && s[i+1]=='?')
		{
			s[i+1]='R';
		}
		else if(s[i]=='R' && s[i+1]=='?')
		{
			s[i+1]='B';
		}

	}
	for(i=0;i<n;i++)
	{
		if(s[i]=='?')
			s[i]='B';
	}

	cout<<s<<endl;

}
int main()
{	MN7 cin>>t;while(t--)
	mahmud();
}
