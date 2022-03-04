#include<bits/stdc++.h>
#include<set>
#define ll long long
using namespace std;

//mahmud48

int main()
{
    string s;
    int i=0;
    while(cin>>s && s!="*"){
        i++;
        if(s=="Hajj")
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        else
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
    }
    return 0;
}
