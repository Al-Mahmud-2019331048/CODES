#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[1000],y[1000],z[1000],t,s1=0,s2=0,s3=0,i=0;
    cin>>t;
    while(t--){
        cin>>x[i]>>y[i]>>z[i];
        s1+=x[i];
        s2+=y[i];
        s3+=z[i];
    }
    if(s1==0 && s2==0 && s3==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
