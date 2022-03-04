#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,t;
    cin>>t;
    while(t--){
            stack<string> st;
    vector<string>v;
    st.push("http://www.lightoj.com/");
    v.push_back("http://www.lightoj.com/");
    string s;
    while(cin>>s){
        if(s=="VISIT"){
            string s1;
            cin>>s1;
            st.push(s1);
            v.push_back(s1);
            i=v.size();
            cout<<st.top()<<endl;
        }
        else if(s=="BACK"){
            st.pop();
            if(st.empty())
                cout<<"Ignored"<<endl;
            else{
                cout<<st.top()<<endl;
                i--;
            }
        }
        else if(s=="FORWARD"){
            cout<<v[i]<<endl;
        }

        else if(s=="QUIT"){
            cout<<" "<<endl;
        }


        }
    }

    return 0;
}
