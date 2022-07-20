#include<bits/stdc++.h>
using namespace std;
#define M 1000000009

func(long long n,long long p){
    if(p==0) return 1;
    if(p%2==0){
        long long ret=func(n,p/2);
        return ((ret%M)*(ret%M))%M;
    }
    else return ((n%M)*(func(n,p-1)%M))%M;
}

int main()
{
    long long n,p;
    cin>>n>>p;
    long long ans= func(n,p);

    cout<<ans<<endl;

}