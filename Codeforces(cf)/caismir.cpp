#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.size();
        int cnta=0,cntb=0,cntc=0;
        for (int i = 0; i < l; ++i)
        {
            if(s[i]=='A')
                cnta++;
            else if(s[i]=='B')
                cntb++;
            else
                cntc++;
         }
        if(cnta+cntc==cntb)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
