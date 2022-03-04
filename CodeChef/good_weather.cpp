#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    int t,a;
    cin>>t;
    while(t--){
        int one=0,zero=0;
        for (int i = 0; i < 7; ++i)
        {
           cin>>a;
           if(a==1)
                one++;
            else
                zero++;
        }
        if(one>zero)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}
