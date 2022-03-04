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
//    it=find(mylist.begin(),mylist.end(),1);
    it=find(mylist.begin(),mylist.end(),6);  //we want to remive 6,,so we find the pointer pointing 6
    mylist.erase(it);  //erase that element pointing by it..
//    if(it==mylist.end())
//        cout<<"NOT FOUND"<<endl;
//    else
//        cout<<"FOUND"<<endl;
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<"\n";
    return 0;
}
