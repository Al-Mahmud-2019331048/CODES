#include<bits/stdc++.h>
using namespace std;

//Mahmud
//CSE'19,SUST

int main()
{
	ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	long long n,k,cnt=0;
	//scanf("%d %d",&n,&k);
	cin>>n>>k;
	while(n--){
		int t;
		//scanf("%d",&t);
		cin>>t;
		if(t%3==0)
			cnt++;
	}
	//printf("%d\n",cnt);
	cout<<cnt<<endl;
	

	return 0;
}