#include <bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
	int n,m;
	cin>>n>>m;
	char ar[n][m];
	int li=55,lj=55,ri=-1,rj=-1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>ar[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(ar[i][j]=='*'){
				li=min(li,i);
				ri=max(ri,i);
				lj=min(lj,j);
				rj=max(rj,j);

			}

		}
	}
	for (int i = li; i <= ri; ++i)
	{
		for (int j = lj; j <= rj; ++j)
		{
			cout<<ar[i][j];
		}
		cout<<endl;
	}
	/*
	char arr[51][51];
	for (int i = ll1,k=0; i < rr2; ++i,++k)
	{
		for (int j = ll2,l=0; j < rr1; ++j,++l)
		{
			arr[k][l]=ar[i][j];

		}
	}
	for (int i = 0; i <= k; ++i)
	{
		for (int i = 0; i <= l; ++i)
		{
			printf("%c ",arr[i][j] );
		}
	}
*/
	return 0;
}