#include<iostream>
#include<stdio.h>
#include<utility >
#include<vector>
using namespace std;

int main()
{
    vector<pair<int,string> >v;  //include pair into vector
    vector<pair<int,string> >::iterator it;
    v.push_back(make_pair(21,"dipto"));
    v.push_back(make_pair(22,"mahmud"));
    for(it=v.begin();it!=v.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
    }
//    pair<string,int>p;
//    p.first="dipta";
//    p.second=21;
//    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}
