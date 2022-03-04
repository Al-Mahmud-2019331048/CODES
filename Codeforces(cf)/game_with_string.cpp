#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    string s;
    cin>>s;
    int cnt=0;
    for (int i = 0; i < s.size(); ++i)
    {
        if(s[i]==s[i+1]){
            cnt++;
            s.erase(i,2);
            i=-1;  //i++ hoye abr 0 theke suru hbe
        }
    }
    if(cnt%2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
