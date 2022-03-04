#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
	int n;
	while(cin>>n && n!=0){
		priority_queue<int,vector<int> ,greater<int> > p;
		int x;
		for (int i = 1; i <= n; ++i)
		{
			cin>>x;
			p.push(x);
		}
		ll cnt=0;
		while(p.size()!=1){
			int tmp=p.top();
			p.pop();
			tmp+=p.top();
			p.pop();

			cnt+=tmp;
			p.push(tmp);
		}
		cout<<cnt<<endl;
		p.pop();
	}
	return 0;
}