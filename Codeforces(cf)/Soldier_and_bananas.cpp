#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    long long int k,n,w,cost,rend;
    cin>>k>>n>>w;
    cost=k;

    for (int i = 0; i < w; ++i)
    {
        cost+=k;
    }

    rend=cost-n;
    cout<<rend<<endl;

    return 0;
}
