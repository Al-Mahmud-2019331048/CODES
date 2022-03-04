#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n,k,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;i++){
            int x=i%k;
            cout<<char('a'+x);
        }
        cout<<endl;
    }




    return 0;
}
