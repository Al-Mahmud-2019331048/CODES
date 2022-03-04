#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int temp,n,sum=0,r=0;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum+=r;
        temp=temp/10;
    }
    if(n%sum == 0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
