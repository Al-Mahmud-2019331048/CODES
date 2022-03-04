#include<bits/stdc++.h>

using namespace std;

vector<int> v;

int main()
{
    int ln=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4' || s[i]=='7')
            ln++;
    }
    if(ln==4 || ln==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
