#include<bits/stdc++.h>
using namespace std;

//O(n2)
void selection_sort(vector<int>&v,int n){
	int index_min;
	for (int i = 0; i < n; ++i)
	{
		index_min=i;
		for (int j = i+1; j < n; ++j)
		{
			if(v[j]<v[index_min])
				index_min=j;
		}
		if(index_min!=i)
			swap(v[i],v[index_min]);
	}
}


//O(n2)
void bubble_sort(vector<int>&v,int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if(v[j]>v[j+1])
				swap(v[j],v[j+1]);
		}
	}
}


int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
		cin>>v[i];
	bubble_sort(v,n);
	selection_sort(v,n);
	for (int i = 0; i < n; ++i)
		cout<<v[i]<<" ";
	cout<<endl;



	return 0;
}