#include<bits/stdc++.h>
using namespace std;

#define inf 1e8
/*
Two Pointer Algo
Left, Right moves independently
Sorted array a[] Given, You have to find i,j such that
a[i]+a[j]=x.. (Two sum problem)
Soln1:Binary search..suppose we know a[i].. 
then we find a[j]=x-a[i] O(n*ln(n))
Soln2:Two Pointer...
L=0,R=n-1
sum=a[L]+a[R]
sum==x return

sum>x R--  we have to decrease sum
sum<x L++  we have to increase sum
O(n)
*/
void Two_sum(int a[],int n,int x){
	int L=0,R=n-1,sum=0,flag=0;
	while(L<R){
		sum=a[L]+a[R];
		if(sum==x){
			flag=1;
			return;
		}
		if(sum>x) R--;
		else L++;
	}
}

/*
a[]={.........} +ve number
If there exist a subarray thats sum is = x
*/
void Subarray_sum(int a[],int n,int sum)   //O(n)
{
	int cur_sum=0,L,R;
	for (L=0,R=0; R < n; ++R)
	{
		cur_sum+=a[R];

		while(cur_sum>sum){
			cur_sum-=a[L];
			L++;
		}
		if(cur_sum==sum){
			cout<<L<<""<<R<<'\n';
			return;
		}
	}
}


/*
a[]={.........},sum
sub_sum>sum And length minimum
*/
void Sub_sum(int a[],int sum,int n){
	int cur_sum=0,L,R,mini=inf;
	for (L=0,R=0; R<n; R++)
	{
		cur_sum+=a[R];
		while(cur_sum>sum){
			if(mini>R-L+1){
				mini=R-L+1;
			}
			cur_sum-=a[L];
			L++;
		}
		
	}
}


/*
a[]={1,1,1,0,0,0,1,1,1,0,1,1,1}
replace one or k number of 0 -> 1...
make continuous 1 maximum...
Soln:Find maximum window length with only one 0 or K number of 0
*/

void max_one(int a[],int n,int k)
{
	int zero=0,L,R,maxi=-1;
	for (L=0,R=0; R<n; ++R)
	{
		if(a[R]==0) zero++;
		while(zero>k){
			if(a[L]==0) zero--;
			L++;
		}
		if(maxi<R-L+1){
			maxi=R-L+1;
		}
	}
}


/*
s="abcbcdcdccba"
find a maximum length substring that elements is distinct
*/
void max_len(int s[],int n){
	int vis[128]={0};
	int L,R,maxi=-1;
for(L=0,R=0;R<n;R++){
	if(vis[s[R]]==1){
		while(s[L]!=s[R]){
			R++;
			vis[s[L]]=0;
		}L++;
		
	}
	if(maxi<R-L+1)
	maxi=R-L+1;
}
}


/*
Sliding Window:
Left Right moves constantly
*/

int main()
{


	return 0;
}