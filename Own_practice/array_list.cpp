#include<iostream>
#include<stdio.h>
#include<list>  //list item(like a vector,,extra facility:push_front
#include<iterator>  //iterator (pointer)
using namespace std;

int main()
{
    int arr[5]={5,2,1,6,3};
    list<int>mylist(arr+0,arr+5);  //copying array item into a list
    list<int>::iterator it;
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<"\n";
    return 0;
}
