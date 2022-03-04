#include<bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
    int k,l,n,m,d,cnt=0;
    cin>>k>>l>>n>>m>>d;
    vector<int> v(d,0);
    if(k==1 || l==1 || m==1 || n==1)
        cout<<d<<endl;
    else{
        for (int i = 0; i < d; ++i)
        {
            if((i+1)%k==0 || (i+1)%l==0 || (i+1)%m==0 || (i+1)%n==0)
                v[i]=1;
        }
        for (int i = 0; i < d; ++i)
        {
            if(v[i]==1)
                cnt++;
        }
        cout<<cnt<<endl;
    }

    
    return 0;
}
