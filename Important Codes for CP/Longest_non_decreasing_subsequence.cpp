#include<bits/stdc++.h>
using namespace std;

#define ll long long

//longest non decreasing subsequence
int LNDS(vector<ll>v,int n){
	int *lis,i,j,max=0;
	lis=(int*) malloc (sizeof(int)*n);
	for (int i = 0; i < n; ++i)
		lis[i]=1;
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if(v[i]>=v[j] && lis[i]<lis[j]+1)
				lis[i]=lis[j]+1;
		}
	}
	sort(lis,lis+n);
	int r=lis[n-1];
	free(lis);
	return r;
}

//more efficient
int LNDS2(vector<ll>&v){
	vector<int>lis;
	for(auto &x : v){
		auto it=upper_bound(lis.begin(),lis.end(),x);
		if(it==lis.end())
			lis.push_back(x);
		else *it=x;
	}
	return lis.size();

}


int main()
{
	int n;
	cin>>n;
	vector<ll>v(n);
	for (int i = 0; i < n; ++i)
		cin>>v[i];
	int ans=LNDS(v,n);
	cout<<ans<<endl;

	return 0;
}
