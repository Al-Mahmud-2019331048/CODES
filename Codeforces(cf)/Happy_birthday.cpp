#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48
bool beautiful(int n)
{
    string s;
    s=to_string(n);
    //cout<<s<<endl;
    for (int i = 0; i < s.size()-1; ++i)
    {
        if(s[i]!=s[i+1])
            return 0;
    }
    return 1;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,cnt=0;
        cin>>n;
        
        /*for (int i = 1; i<= n; ++i)  //TLE
        {
            if(beautiful(i))
                cnt++;
        }
        */
        int b=0;
        for (int i = 1; i <= 9; ++i)
        {
            b=b*10 + 1;
            for (int m = 1; m<=9 ; m++)
            {
               if(b*m<=n)
                cnt++;
            }
        }


        cout<<cnt<<endl;
    }
    return 0;
}