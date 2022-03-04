#include<bits/stdc++.h>
using namespace std;

int main()
{
    //mahmud48
    int n,length;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        length=s.size();
        if(length<=10)
            cout<<s<<endl;
        else
            cout<<s[0]<<length-2<<s[length-1]<<endl;

    }

    if(n>2 &&n%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
