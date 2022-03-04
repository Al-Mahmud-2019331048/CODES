#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        string s;
    cin>>s;
    if(next_permutation(s.begin(),s.end())==false)
        cout<<"no answer"<<endl;
    else
        cout<<s<<endl;
    }

    return 0;
}
