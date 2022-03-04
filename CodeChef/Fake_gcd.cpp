#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;)
            cout<<++i<<" ";
        cout<<endl;
    }
    return 0;
}