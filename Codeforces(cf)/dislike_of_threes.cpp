#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    int t,n=1;
    vector<int> v;

    for (int i = 1 ; i <5000 ; i++)
    {
        if(i%3==0 || i%10==3)
            continue;
        else
            v.push_back(i);
    }
   
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        cout<<v[k-1]<<endl;
    }
    return 0;
}
