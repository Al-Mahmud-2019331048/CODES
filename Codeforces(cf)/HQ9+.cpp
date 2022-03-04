#include<bits/stdc++.h>

using namespace std;


//mahmud48
int main()
{  
    bool flag=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
            flag=1;
    }
    if(flag)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    return 0;
}
