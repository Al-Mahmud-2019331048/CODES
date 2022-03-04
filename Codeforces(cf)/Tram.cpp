#include<bits/stdc++.h>

using namespace std;

vector<int> v;

int main()
{
    long long int n,t,pas=0;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        pas-=a;
        pas+=b;
        v.push_back(pas);
    }

    sort(v.begin(),v.end());
    t=v.size();
    cout<<v[t-1]<<endl;
    return 0;
}
