#include<bits/stdc++.h>
using namespace std;
#define sz       200000
#define ll       long long
#define pb       push_back
#define pi       2*acos(0.0)
#define f        first
#define s        second
#define mod      1000000007
#define fastio   {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define test     ll t; cin>>t; while(t--)
const int N = 1e6;

int main()
{
//    ll n,ans;
//    cin>>n;
//    ll a[n+1];
//    for(int i=1;i<=n;i++)
//        cin>>a[i];
//    sort(a+1,a+n+1);
//
//    for(int i=1;i<n;i++){
//        ll temp=sqrt(a[i]);
//        if(a[i] != (temp*temp) ) ans=a[i];
//    }


int n,ans;
	cin>>n;
	int arr[n+1];
	for(int i = 1;i <= n;i++){
		cin>>arr[i];
	}
	sort(arr+1,arr+n+1);
	for(int i = 1;i <= n;i++){
		int temp = sqrt(arr[i]);
		if(arr[i]!=temp*temp) ans = arr[i];
	}
//	cout<<ans<<ndl;
    cout<<ans<<endl;
    return 0;
}
