#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
	int n,a,b=0;
	bool flag=0;
	std::vector<int> v(7);
	for (int i = 0; i < 6; ++i){
		cin>>v[i];
		b+=v[i];
	}
	//cout<<b<<endl;
	for (int i = 0; i < 6; ++i)
			for (int j = i+1; j < 6; ++j)
					for (int k = j+1; k < 6; ++k){
						a=v[i]+v[j]+v[k];
						if(a==b-a){
						 	flag=1;
						 	break;
						}
					}
flag? cout<<"YES"<<endl : cout<<"NO"<<endl;
	return 0;
}