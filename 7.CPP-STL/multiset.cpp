#include<stdio.h>
#include<iostream>
#include<set>

using namespace std;

int main()
{
    multiset<int>s;
    multiset<int>::iterator it;

    s.insert(20);
    s.insert(25);
    s.insert(20);
    s.insert(23);
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
