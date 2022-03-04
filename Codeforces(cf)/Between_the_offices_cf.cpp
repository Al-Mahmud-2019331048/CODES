#include<bits/stdc++.h>
using namespace std;

int main()
{

    //mahmud48
    int n;
    cin>>n;
    char s[n];
    cin>>s;

    if(s[0]=='S' && s[n-1]=='F')
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
