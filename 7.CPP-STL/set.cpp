#include<iostream>
#include<stdio.h>
#include<set>
#include<iterator>
using namespace std;

int main()
{
    set<int>s;
    set<int>::iterator it;
    s.insert(10);
    s.insert(3);
    s.insert(5);
    it =s.find(10);  //finding a value,,it points the element where 10 have
    s.erase(5);  //remove a number
    cout<<*it<<endl;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}
