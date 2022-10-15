#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-9

//prerequisite: sorted array

int Sqrt(int n){

	int low=0,high=n,mid,ans=0;

	while(low<=high){
		mid=(low+high)/2;  //low+(high-low)/2

		if( mid*mid<=n ){
			ans=mid;
			low=mid+1; //there may be sqrt that id greater than mid
		}
		else{
			high=mid-1;
		}
	}

	return ans;
}


double Sqrt1(double n){  //for more accurate

	double low=0.0,high=n,mid,ans=0.0;

	while(high-low>EPS){
		mid=(low+high)/2.0;  

		if( mid*mid<=n ){
			ans=mid;
			low=mid; //there may be sqrt that id greater than mid
		}
		else{
			high=mid;
		}
	}

	return ans;
}

int main()
{
	int n;
	cin>>n;
	cout<<Sqrt(n)<<'\n';


	return 0;
}