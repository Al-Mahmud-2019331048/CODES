#include <iostream>
using namespace std;
#define sz       200000
#define pb       push_back
#define ll       long long
#define f        first
#define s        second
#define mod      1000000007

int main()
{
    ll n,p,q,ans=0;
    cin>>n;
    while(n--){
        cin>>p>>q;
        if(q-p>1)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
