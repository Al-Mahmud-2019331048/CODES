#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    string s;
    cin>>s;
    int flag=0;
    for (ll i = 0; i < s.size(); ++i)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
            //s[i]==' ', s[i+1]==' ' , s[i+2]==' ';;cout<<s;
           {
                i+=2;
                if(flag=1)
                    printf(" ");
                else
                    continue;
           }
           else{
            cout<<s[i];
            flag=1;
           }
    }
    return 0;
}