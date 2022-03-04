#include<iostream>
#include<stdio.h>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    int ar[5]={5,2,1,6,3};
    list<int>mylist(ar,ar+5);
    list<int>::iterator it;
//    list<int>mylist;
    if(mylist.empty())  //check a list empty or not
        cout<<"EMPTY"<<endl;
    else
        cout<<"FILLED"<<endl;
    cout<<mylist.front()<<endl;  //showing first element
    cout<<mylist.back()<<endl;  //showing last element

    mylist.pop_front();  //removing first element
    mylist.pop_back();  //removing last element

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t";
    }

    return 0;
}
