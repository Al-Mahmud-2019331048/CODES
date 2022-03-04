#include<bits/stdc++.h>

using namespace std;

//mahmud48

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		std::vector<int> v;
		int digit=0,div=1,m=n;
		while(m!=0){
			m/=10;
			digit++;
		}
		//cout<<"digit="<<digit<<endl;
		if(digit==1){
			cout<<1<<endl;
			cout<<n<<endl;
		}
		else{
			for (int i = 0; i < digit-1; ++i)
		{
			div*=10;
		}
		//cout<<"divisor="<<div<<endl;

		int i=0,k=0;
		while(n!=0){
			v.push_back((n/div)*div);
			if((n/div)*div != 0)
				k++;
			//cout<<n/div<<endl;
			n=n%div;
			//cout<<n<<endl;
		   	div/=10;
			i++;
		}
		cout<<k<<endl;
		for (int j = 0; j < v.size(); ++j)
		{
			if(v[j]!=0)
				cout<<v[j]<<" ";
		}
		
	
		cout<<endl;
		}
		
	}
	return 0;
}