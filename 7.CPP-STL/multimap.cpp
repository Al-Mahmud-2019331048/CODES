#include<stdio.h>
#include<iostream>
#include<map>

using namespace std;

int main()
{
    multimap<string,int>m;  //multimap allow duplicate key,but map not
    multimap<string,int>::iterator it;

    m.insert(make_pair("dipta",34));
    m.insert(make_pair("dipta",44));
    m.insert(make_pair("arnob",24));

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
