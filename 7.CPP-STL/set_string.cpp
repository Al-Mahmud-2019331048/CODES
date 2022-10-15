#include<iostream>
#include<stdio.h>
#include<set>
#include<iterator>
using namespace std;

int main()
{
    set<string>s;
    set<string>::iterator it;
    s.insert("mahmud");
    s.insert("zahid");
    s.insert("nishan");
    pair<set<string>::iterator,bool>p;
    p=s.insert("mahmud");

    if(p.second==false)  //duplicate item
        cout<<"Can't insert"<<endl;
    else  //unique item
        cout<<"inserted"<<endl;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}
