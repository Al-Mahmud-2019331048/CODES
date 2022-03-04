#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;
    while(t--)
    {
    long long int temp,n,r=0,rev=0;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;

    }
    cout <<rev<<endl;
    }

    return 0;
}
