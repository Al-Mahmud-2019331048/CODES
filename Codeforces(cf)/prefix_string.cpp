#include<bits/stdc++.h>

using namespace std;


int main()
{
    string a,b;
    vector < string > prefa, prefb;
    cin>>a>>b;
    string tmp="";

    for(int i=0;i<a.size();i++){
        tmp+=a[i];
        prefa.push_back(tmp);
    }
    tmp="";
    for(int i=0;i<b.size();i++) {
        tmp+=b[i];
        prefb.push_back(tmp);
    }
    vector < string >  v;
    for(int i=0;i<prefa.size();i++)
        for(int j=0;j<prefb.size();j++) {
        string s = prefa[i]+prefb[j];
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;

    return 0;
}
