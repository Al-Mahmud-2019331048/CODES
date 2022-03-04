#include<bits/stdc++.h>
using namespace std;
const int mx=1e6+5;

int f[mx];

//O( n*log(log n) )
void siv(){
    f[0]=f[1]=1;  //0-prime, 1-not prime f[0]=0,f[1]=1
    for(int i=2;i*i<mx;i++){
        if(!f[i]){  //if f[0]=0 or prime
            for(int j=i+i;j<mx;j+=i)
                f[j]=1;  // i er multiple gula kete dilam
        }
    }
}

int main()
{
    long long int n;
    cin>>n;
    siv();

    for(int i=0;i<n;i++){
        if(!f[i]) cout<<i<<endl;
    }
    return 0;
}
