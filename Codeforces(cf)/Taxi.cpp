#include<bits/stdc++.h>
using namespace std;

map<int,int> m;

int main()
{
    long long int n;
    int j,taxi=0;
    cin>>n;
    
    for (int i = 0; i < n; ++i)
    {
        int s;
        cin>>s;
        m[s]++;
    }
    //cout<<m[1]<<m[2]<<m[3]<<m[4]<<endl;

    taxi=m[4]+m[3]+m[2]/2;
    m[1]-=m[3];
    if(m[2]%2==1){
        taxi++;
        m[1]-=2;
    }
    if(m[1]>0) taxi+=ceil(m[1]/4.0);

   
    cout<<taxi<<endl;
    
    return 0;
}
