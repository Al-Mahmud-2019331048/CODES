#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    string s;
    cin>>s;
    int cnta=0,cnto=0,l=s.size(),bad=0;
    for (int i = 0; i < l ; ++i)
    {
        if(s[i]=='a')
            cnta++;
        else
            cnto++;
    }
    //cout<<cnta<<" "<<cnto<<endl;
    if(cnta>cnto)
        cout<<l<<endl;
    else{
        while(!(cnta>cnto)){
            cnto--;
            bad++;
        }
        cout<<l-bad<<endl;
    }
    return 0;
}
