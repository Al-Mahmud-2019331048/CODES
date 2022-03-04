#include<bits/stdc++.h>

using namespace std;
map<string,int>mp;

int main()
{
    long long int n;
    int i,j,mx=-1;
    cin>>n;
    string s,ans="";
    cin>>s;
    for(i=0;i<n-1;i++)
        mp[s.substr(i,2)]++;
    for(auto i : mp){
        if(i.second > mx) mx=i.second,ans=i.first;
    }

    cout<< ans <<endl;
    return 0;
}
