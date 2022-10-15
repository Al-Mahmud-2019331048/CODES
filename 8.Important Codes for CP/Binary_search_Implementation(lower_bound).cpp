#include<bits/stdc++.h>
using namespace std;

//{2,3,4,16,19,20}
//lower_bound(x): k>=x
//upper_bound(x): k>x

int Lower_bound(int a[],int n, int x)
{
	int low=0,high=n-1,mid,ans=-1;
	while(low<=high){
		mid=(low+high)/2;

		if(a[mid]>=x){
			ans=mid;
			high=mid-1;
		}
		else
			low=mid+1;
	}
	return ans;
}

int Upper_bound(int a[],int n, int x)
{
	int low=0,high=n-1,mid,ans=-1;
	while(low<=high){
		mid=(low+high)/2;

		if(a[mid] > x){   //notice here, just >
			ans=mid;
			high=mid-1;
		}
		else
			low=mid+1;
	}
	return ans;
}

//2,4,5,7,10,9,8,5,3 ->array(increasing+decreasing)
//1,1,1,1,1, 0,0,0,0
//max value? Using Binary Search O(ln(n)) - 2 base log

int Max(int a[],int n)
{
	int low=0,high=n-1,ans=0,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(mid==0 || a[mid]>a[mid-1]){
			ans=mid;
			low=mid+1;
		}
		else
			high=mid-1;
	}
	return ans; //or a[ans];
}


//15,16,18,19,20,2,3,10,11,13 ->rooted(shifted) array
//1   1  1  1  1  0 0 0  0 0  a[x]>a[r]
//find minimum number using Binary Search

int Min(int a[],int n)
{
	int l=0,h=n-1,mid,ans=0;
	while(l<=h){
		mid=(l+h)/2;
		if(a[mid]>a[h]){
			l=mid+1;
		}
		else{
			ans=mid;
			h=mid-1;
		}
	}
	return a[ans];
}

//2,2,3,3,4,4,5,8,8,9,9
//Find the number which frequency is one using Binary search

		

int main()
{
	int m,n;

	int a[]={4,5,4,5,7,2,54,24,2,34,2,43,4,2,3,4,43,3,453,3,6,5,3,24};
	int ans=Lower_bound(a,sizeof(a),10);
	cout<<ans<<endl;


	return 0;
}