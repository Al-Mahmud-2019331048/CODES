#include<iostream>
#include<stdio.h>
#include<list>  //list item(like a vector,,extra facility:push_front
#include<iterator>  //iterator (pointer)
using namespace std;

int main()
{
    list<float>mylist(4);  //4 element
//    list<float>mylist(4,2);  //4 element,all elements are 2
    list<float>::iterator it;

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t";
    }
    return 0;
}
