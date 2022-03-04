#include<bits/stdc++.h>

using namespace std;

//mahmud48

int main()
{
    int n,m,a,b,f=0,sum1=0,sum2=0,sum=0,l=0;
    float normal,special;
    cin>>n>>m>>a>>b;
    sum1=n*a;
    special=(float)b/m;
    if(special < a*1.0){
        if(n%m==0)
            cout<<(n/m)*b<<endl;
        else if((n%m)*a>=b)
            cout<<((n/m)+1)*b<<endl;
        else
            cout<<(n/m)*b+(n%m)*a<<endl;
    }
    else
        cout<<n*a<<endl;
    return 0;
}
