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
    it= find(mylist.begin(),mylist.end(),6);   //find function search 6 from begin to end
//                                      & assign the pointer it
//    it=mylist.begin(); //it pointing first element
//    it++;  //it pointing 2nd element
    mylist.insert(it,7);  // insert 7 int it,,it points 2nd element,,so 2nd element is 7

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<"\n";
    return 0;
}
