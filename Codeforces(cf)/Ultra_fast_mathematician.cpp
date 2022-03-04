#include<bits/stdc++.h>

using namespace std;

//mahmud48

int main()
{  
    string s,k;
    cin>>s;
    scanf("\n");
    cin>>k;

    //cout<<s<<endl;
    //cout<<k<<endl;
    for(int i=0;i<s.size();i++){
        if(s[i]!=k[i])
            s[i]='1';
        else
            s[i]='0';
    }
    cout<<s<<endl;


    return 0;
}
