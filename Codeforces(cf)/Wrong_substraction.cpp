#include<bits/stdc++.h>

using namespace std;

int main(){

    //mahmud48
    long long int n,k;
    cin>>n>>k;
    for (int i = 1;i<=k; ++i)
    {
        if(n%10 != 0)
            n=n-1;
        else
            n=n/10;
    }

    cout<<n<<endl;
    return 0;
}
