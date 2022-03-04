#include<bits/stdc++.h>
#define sz 3
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int i,j,sl,tl,flag=0;
    sl=s.size();
    tl=t.size();

//    cout<<tl<<sl<<endl;

    for(i=0,j=tl-1;i<tl,j>=0;i++,j--){
        if(s[i]!= t[j]){
            flag=1;
            break;
        }
    }
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}
