#include<bits/stdc++.h>
using namespace std;
#define sz       200000
#define pb       push_back
#define ll       long long
#define f        first
#define s        second
#define mod      1000000007

int main()
{
    ll t,n,k,Max;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&n,&k);
        ll a[n],arr[n];
        for(ll i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            arr[i]=(i*j)-k*(a[i]|a[j]);
            }
        }
        Max=LLONG_MIN;
        for(int i=0;i<n-1;i++){
            if(Max<arr[i])
                Max=arr[i];
        }

        cout<<Max<<endl;
    }

    return 0;
}
