#include<iostream>
#include<stdio.h>
#include<list>  //list item(like a vector,,extra facility:push_front
#include<iterator>  //iterator (pointer)
using namespace std;

int main()
{
    list<float>mylist;
    list<float>::iterator it;
    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(5);  //5 comes front of the list
    mylist.push_front(20);  //updated:20 comes front of the list
    mylist.push_back(-1);  //-1 add last elemrnt int the list
    mylist.reverse();   //list reverse
//    -1  20  5  15  10
    mylist.clear();  //list empty
    cout<<mylist.size()<<endl;
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t";
    }
    return 0;
}
