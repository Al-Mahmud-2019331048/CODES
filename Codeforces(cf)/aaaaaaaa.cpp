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
    ll t;
    scanf("%d",&t);
    while(t--){
            ll n;
        scanf("%lld",&n);
        ll arr[n],arra[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }
        ll Max=LLONG_MIN;
        for(int i=0;i<n-1;i++){
            Max=max((arr[i]*arr[i+1]),Max);
        }



        cout<<Max<<endl;

    }

    return 0;
}
