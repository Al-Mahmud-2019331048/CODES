#include<iostream>
#include<stdio.h>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    map<string,int>m;
    map<string,int>::iterator it;
    m["Dipto"]=43;  //m.insert(make_pair("Dipto:,43));
    m["Arnob"]=42;
    m["Ali"]=23;
    it=m.begin();
    for(it=m.begin();it!=m.end();it++)
    {
         cout<<it->first<< " " <<it->second<<endl;
    }
//    cout<<it->first<<endl;  //ascending first element ->ali
    return 0;
}
