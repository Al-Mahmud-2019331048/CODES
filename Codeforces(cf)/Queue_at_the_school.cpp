#include<bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        for(int i=0;i<n-1;){
            if(s[i]=='B' && s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                //swap(s[i],s[i+1])
                i+=2;
            }
            else i++;
        }
    }

    cout<<s<<endl;
    return 0;
}