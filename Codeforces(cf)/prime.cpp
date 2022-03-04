#include<bits/stdc++.h>

using namespace std;

int isprime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)   //i<sqrt(n)
        if(n%i==0) return 0;
    return 1;
}

int main()
{
    long long int n;
    cin>>n;
    int i=isprime(n);
    //cout<<i<<endl;
    if(i)
        cout<<n<<" is Prime"<<endl;
    else
        cout<<n<<" is not prime"<<endl;

    return 0;
}
