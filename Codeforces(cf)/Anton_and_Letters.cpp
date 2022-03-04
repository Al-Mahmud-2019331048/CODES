#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    string s;
    getline(cin,s);
    set<char>s1;
    for (int i = 0; i < s.size(); ++i)
    {
        //if(s[i]!='{' || s[i]!='}' || s[i]!=',' || s[i!=' '])
        if(s[i]>='a' && s[i]<='z')
            s1.insert(s[i]);
    }
    cout<<s1.size()<<endl;
    return 0;
}
