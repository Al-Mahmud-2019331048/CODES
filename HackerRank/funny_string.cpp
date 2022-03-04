#include<bits/stdc++.h>
#include<set>
#define ll long long
using namespace std;

//mahmud48

void funnyString(string s)
{       
    string s1=s;
        std::vector<int> v;
        reverse(s1.begin(),s1.end());
        bool flag=1;int x,y;
        //cout<<s<<" "<<s1<<endl;
        for (int i = 0; i < s.size()-1; ++i)
        {
            x=s[i+1]-s[i];
            y=s1[i+1]-s1[i];
            x=abs(x),y=abs(y);
            //cout<<x<<" "<<y<<endl;
            if(x!=y){
                flag=0;
                break;
            }

        }
        if(flag)
            cout<<"Funny"<<endl;
        else
            cout<<"Not Funny"<<endl;
    }

int main()
{
    ll q;
    cin>>q;
    while(q--){   
        string s;
        cin>>s;
        funnyString(s);
    }
    return 0;
}
