#include<bits/stdc++.h>
using namespace std;

//to escape from infinite loop, we use jumping

//1,2,3,4,5,6,7,8,9
//6 have or not??
//jump=8,4,2,1

int B_search(int a[],int n,int k)
{
	int id=0;

	for (int jump = n; jump > 0; jump/=2)
	{
		while(id+jump<n && a[id+jump]<=k)
			id+=jump;
	}
	return id;

}


int main()
{


	return 0;
}