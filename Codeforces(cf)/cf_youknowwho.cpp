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
    ll t,n,Max;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        ll arr[n],arra[n];
        for(int i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        for(int i=0;i<n-1;i++){
            arra[i]=(arr[i]*arr[++i]);
        }
        ll Max=LLONG_MIN;
        for(int i=0;i<n-1;i++){
            if(Max<arra[i])
                Max=arra[i];
        }

        cout<<Max<<endl;

    }

    return 0;
}
