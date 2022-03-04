#include<bits/stdc++.h>
using namespace std;


//prerequisite: sorted array or monotonic

int B_search(int a[],int n,int k){

	int low=0,high=n-1,mid;

	while(low<=high){
		mid=(low+high)/2;

		if(a[mid] == k)
			return 1;
		if(a[mid]<k)
			low=mid+1;
		else
			high=mid-1;
	}

	return 0;
}

int main()
{
	int arr[100];
	for (int i = 0; i < 10; ++i)
	{
		cin>>arr[i];
	}

	sort(arr,arr+10);

	for (int i = 0; i < 5; ++i)
	{
		int k;  cin>>k;
		cout<<B_search(arr,10,k)<<"\n";
	}
	

}