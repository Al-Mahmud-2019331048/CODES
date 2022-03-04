#include<bits/stdc++.h>
using namespace std;

set<char>s;
map<char,int>mp;

int main()
{
    int n;
    cin>>n;
    string st;
    cin>>st;
    for (int i = 0; i < n; ++i)
        st[i]=tolower(st[i]);
      /*
    for (int i = 0; i < n; ++i)
        s.insert(st[i]);
    s.size()==26 ? cout<<"YES"<<endl : cout<<"NO"<<endl; 
    */
    for (int i = 0; i < n; ++i)
       mp[st[i]]++;
    mp.size()==26 ? cout<<"YES"<<endl : cout<<"NO"<<endl; 
    return 0;
}
