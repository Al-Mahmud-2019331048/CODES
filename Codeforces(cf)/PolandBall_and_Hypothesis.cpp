#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

//mahmud48
int isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)   //i<sqrt(n)
        if(n%i==0) return 0;
    return 1;
}

int main()
{  
    int i,n,m;
    long long num=0;
    cin>>n;
    for(i=1;;){
        num=n*i+1;
        if(isPrime(num))
            i++;
        else
            break;
    }
    cout<<i<<endl;
    
    return 0;
}
