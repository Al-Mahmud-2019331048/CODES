/*
Window size fixed,one kind of two pointer

Given an array,
min or max value of sum of k size sub array
Example:
1,4,1,5,0,2,5
k=3,Find the min sum of k length array
1,4,1=6
4,1,5=10
1,5,0=6
5,0,2=7
0,2,5=7

L=0,R=2
sum=6;

L=1,R=3
sum+=a[R]=11
sum-=a[L]=11-1=10
.......
.......

*/

#include<bits/stdc++.h>
using namespace std;

#define inf 1<<20

void Min_subarray(int a[],int k,int n){
	int mini=inf,start=0,sum=0,L,R;
	for (int i = 0; i < k; ++i)
		sum+=a[i];
	mini=sum;
	for (L=0,R=k; R < n; ++L,++R)
	{
		sum-=a[L];
		sum+=a[R];
		if(sum<mini){
			mini=sum;
			start=L;
		}
	}
}


/*
distinct char
k distinct char or length k

Distinct elements in sub array of size k
*/

void Distinct_element(int k,int a[],int n)
{
	int dist=0;
	int cnt[n]={0};
	for (int i = 0; i < n; ++i)
	{

		if(i>k){  //initial window created
			cnt[a[i-k]]--;
			if(cnt[a[i-k]]==0)
				dist--;
		}
		cnt[a[i]]++;
		if(cnt[a[i]]==1)
			dist++;
	}
}


/*
Given an array
sub array of k size min element:

5,7,10,12,6,7,2,10  ; k=3

{5}-->increasing order 5
{5,7}-->increasing order 5
{5,7,10}-->increasing order 5
{5,7,10,12}-->increasing order 5
{7,10,12}-->increasing order 7
{7,10,12,6}-->increasing order 6
{6}-->increasing order 6
{6,7}-->increasing order 6
{6,7,2}-->increasing order 2
{2}-->increasing order 2
{2,10}-->increasing order 2
*/

void Min_element(int a[],int n,int k)
{
	int st[n];
	int L=0,R=0,i,j,mini=inf;
	st[0]=0;
	for (int i = 1; i < k; ++i)
	{
		while(L<=R && a[i]<a[st[R]]) R--;
		//R++;
		st[++R]=i;
	}
	printf("[0 to %d] min = %d \n",k-1,a[st[L]]);

	for (int i = k; i < n; ++i)
	{
		if(i-k==st[L]) L++;
		while(L<=R && a[i]<a[st[R]]) R--;
		//R++;
		st[++R]=i;
		mini=st[L];  
		printf("[%d to %d] min = %d \n",i-k+1,i,a[st[L]]);
	}
}


int main()
{

	return 0;
}