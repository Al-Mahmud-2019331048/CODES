#include<bits/stdc++.h>
#define ll long long

using namespace std;

int isBalanced(string s){
    stack<char> st;

    for (auto ch : s)
    {
        
        switch(ch){
            case '[':
            case '{':
            case '(':
                st.push(ch);
                break;
            
            case ')':
                if(st.empty() || st.top() != '(')
                    return 0;
                st.pop();
                break;
            case '}':
                 if(st.empty() || st.top() != '{')
                    return 0;
                st.pop();
                break;

            case ']':
                 if(st.empty() || st.top() != '[')
                    return 0;
                st.pop();
                break;
        }
    }
                
        
    if(st.empty())
        return 1;
    else
        return 0;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(isBalanced(s))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    
    return 0;
}
