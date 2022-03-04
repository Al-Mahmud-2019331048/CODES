#include<bits/stdc++.h>
#include<set>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;
    for (int i = 0; i < n; ++i)
        st.insert(s[i]);
    if(st.size()==1)
        cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for (int i = 0; i < n-1; ++i)
        {
            if(s[i] != s[i+1]){
                cout<<s[i]<<s[i+1]<<endl;
                break;
            }
        }
    }
    return 0;
}
