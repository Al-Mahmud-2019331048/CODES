#include<bits/stdc++.h>
using namespace std;

//mahmud48
bool caps(string s)
{
    for(int i=1;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')
            return 0;
    }
    return 1;
}

int main()
{
    string s,k;
    cin>>s;
    if(caps(s)){
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z')
                s[i]=tolower(s[i]);
            else if(s[i]>='a' && s[i]<='z')
                s[i]=toupper(s[i]);
        }
    }

    cout<<s<<endl;
    return 0;
}