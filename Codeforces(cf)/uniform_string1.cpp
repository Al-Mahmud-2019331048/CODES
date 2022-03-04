#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string s="";
        for (int i = 0; i < n;)
        {
            for (int j = 0; j < k; ++j)
            {
              //cout<<char('a'+j);
               s+=('a'+j);
               i++;
            }
        }
        for (int i = 0; i < n; ++i)
            cout<<s[i];
        cout<<endl;
    }
    return 0;
}
