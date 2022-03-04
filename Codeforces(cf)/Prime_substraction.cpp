#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;

//mahmud48
vector<ll>   Prime(long long n)
{
    vector<ll>v;
    //v.push_back(2);
    ll i,j;
    for (i = 3; i <= n; i++) {
        bool flag = 1;
        for (j = 2; j*j <= i; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            v.push_back(i);
   }
   return v;
}

int main()
{  
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        ll sub=x-y;
            if(sub==1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;   
        }
        
    return 0;
}
