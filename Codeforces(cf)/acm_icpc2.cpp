#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
	int n,a,b=0;
	bool flag=0;
	int v[6];
	for (int i = 0; i < 6; ++i)
		cin>>v[i];
	sort(v,v+6);
	while(next_permutation(v,v+6)){
		for (int i = 0; i < 6; ++i)
		{
			if(v[0]+v[1]+v[2] == v[3]+v[4]+v[5]){
				flag=1;break;
			}
		}
	}	
	flag? cout<<"YES"<<endl : cout<<"NO"<<endl;
	return 0;
}