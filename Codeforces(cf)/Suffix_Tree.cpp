#include <iostream>
using namespace std;
#define sz       200000
#define ll       long long


int main()
{
    //mahmud48

    ll t,l;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        l=s.size();
        if(s[l-1]=='o' && s[l-2]=='p')
            cout<<"FILIPINO"<<endl;
        else if(s[l-1]=='a' && s[l-2]=='d' && s[l-3]=='i' && s[l-4]=='n' && s[l-5]=='m' )
            cout<<"KOREAN"<<endl;
        else
            cout<<"JAPANESE"<<endl;

    }

    return 0;
}
