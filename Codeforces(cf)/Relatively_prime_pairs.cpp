#include<bits/stdc++.h>

using namespace std;

//mahmud48


int main()
{  long long l,r;
    cin>>l>>r;
    cout<<"YES"<<endl;
    for (int i = 0; i < (r-l+1)/2; ++i)
        cout<<l+2*i<<" "<<l+2*i+1<<endl;
    //difference 1 are relatively prime
    
    return 0;
}
