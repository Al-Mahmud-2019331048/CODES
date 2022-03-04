#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    char s[51];
    cin>>t;
    while(t--){
        int cnta=0,cntb=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>s[i];
            if(s[i]=='a')
                cnta++;
            else
                cntb++;
        }
    if(cnta==n || cntb==n)
        cout<<"-1"<<" "<<"-1"<<endl;
    else if(cnta==cntb)
        cout<<1<<" "<<n<<endl;
    else
    {
        for(int i=0;i<n-1;i++){
            if((s[i]=='a' && s[i+1]=='b')|| (s[i]=='b' && s[i+1]=='a')){
                cout<<i+1<<" "<<i+2<<endl;
                break;
            }

        }

    }

    }


}
