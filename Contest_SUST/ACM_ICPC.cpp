#include<bits/stdc++.h>
using namespace std;

int main()
{
	int v[6];
	int sum = 0,sum1,sum2;
	bool flag=0;
	for (int i = 0; i < 6; ++i)
	{
		cin >> v[i];
	}
	sort(v, v + 6);
	while (1) {
		next_permutation(v, v + 6);
		sum1=0,sum2=0;
		for(int i=0;i<3;i++){
			sum1+=v[i];
		}
		for (int i = 3; i < 6; ++i)
		{
			sum2+=v[i];
		}
		//cout<<sum1<<" "<<sum2<<endl;

		if(sum1==sum2){
			//cout<<sum1<<" "<<sum2<<endl;
			flag=1;
			break;
		}

	}
	if(flag)
		cout<<"YES"<<'\n';
	else
		cout<<"NO"<<'\n';
	return 0;
}