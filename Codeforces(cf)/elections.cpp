#include<bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
	int t;
	cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		ll maxi=max(a,max(b,c));
		if(a==b && b==c){
			cout<<maxi+1-a<<" "<<maxi+1-b<<" "<<maxi+1-c<<endl;
		}
		else{
			ll na,nb,nc;
			if(maxi==a){
				if(maxi==b || maxi==c)
					na=1;
				else
					na=0;
			}
			else
				na=maxi+1-a;
			if(maxi==b){
				if(maxi==a || maxi==c)
					nb=1;
				else
					nb=0;
			}
			else
				nb=maxi+1-b;
			if(maxi==c){
				if(maxi==a || maxi==b)
					nc=1;
				else
					nc=0;
			}
			else
				nc=maxi+1-c;


			//b= maxi==b? 0 : maxi+1-b;
			//c= maxi==c? 0 : maxi+1-c;

			cout<<na<<" "<<nb<<" "<<nc<<endl;
		}
		
		
		}
		return 0;
}