#include<bits/stdc++.h>

using namespace std;


//mahmud48
int main()
{  
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        vector<int> v(n+1);
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if((s[n-1])!='0'){
              cnt+=(s[n-1]-'0');
                s[n-1]='0';
            }
            if(s[i]!='0'){
                swap(s[i],s[n-1]);
                cnt++;
                cnt+=(s[n-1]-'0');
                s[n-1]='0';
            }
        }
        cout<<cnt<<endl;
    }


    return 0;
}
