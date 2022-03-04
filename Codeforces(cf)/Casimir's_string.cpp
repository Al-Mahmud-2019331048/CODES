#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnta=0,cntb=0,cntc=0;
        for (int i = 0; i < s.size(); ++i)
        {
            if(s[i]=='A')
                cnta++;
            else if(s[i]=='B')
                cntb++;
            else
                cntc++;
            
        }
        if(cnta==cntb || (cnta+cntb)/2 == cntc || cntb==cntc)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
