#include<bits/stdc++.h>
using namespace std;
main()

{
    int n,i,lower=0,upper=0;
    string s;
    cin>>s;
    n=s.size();
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')  lower++;
        else upper++;
    }

    if(lower>=upper){
        for(int i=0;i<s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z') {
         s[i] = s[i] + 32;
        }
        }
    }
    else
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    cout<<s<<endl;

}
