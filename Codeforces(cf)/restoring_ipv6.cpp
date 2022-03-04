#include<bits/stdc++.h>
#include<set>
#define ll long long
using namespace std;

//mahmud48

void print(string a)
{
    if(a.size()==4) cout<<a;
    else
    {
        for(int j=0;j<4-a.size();j++)
        {
            cout<<"0";
        }
        cout<<a;
    }
}
 

int main()
{
    ll t;
    cin>>t;
    while(t--){
        string s;
        vector<string>v;
        cin>>s;
        int j=0;
        for (int i = 0; i < s.length(); ++i)
        {
            if(s[i]==':'){
                j++;
                continue;
            }
            else{
                string b;
                for (; i<s.length(); ++i)
                {
                    if(s[i]==':'){
                        j++;
                        break;
                    }
                    b+=s[i];
                }
                v.push_back(b);
            }
        }
        
    int flag=0,x=0,y=0;
    for (int i = 0; i<s.length()-1; ++i)
    {
        if(s[i]==':' && s[i+1]==':'){
            if(y==1) flag++;
            x=1;
            break;
        }
        else if(s[i]==':'){
            y=0;
            flag++;
        }
        else y=1;
    }
    if(x==1){
        for (; v.size()<8;)
            v.insert(v.begin()+flag,"0000");
    }

    print(v[0]);
    for (int i = 1; i < v.size(); ++i)
    {
        cout<<":";
        print(v[i]);
    }
    cout<<endl;
}
    
    return 0;
}
