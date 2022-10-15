#include<iostream>
#include<vector>  //vector's header file
#include<iterator>  //iterator(pointer)
#include<stdio.h>
#include<algorithm>  //for sorting function
using namespace std;
bool myfunct(int a,int b)  //function for arranging descending order
{
    return(a>b);
}
int main()
{

    vector<int>vec;
    vector<int>::iterator it; //it is an iterator that can access
//                            an int vector's element
    vec.push_back(10);
    vec.push_back(432);
    vec.push_back(32);
    vec.push_back(32);
    vec.push_back(52);
    vec.push_back(50);
    //printing the vector
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"\t";
    }
    puts("");
    sort(vec.begin(),vec.end());  //sorting a vector ascending order
    puts("Sorted vector(ascending):");
     for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"\t";
    }
    puts("");
    sort(vec.begin(),vec.end(),myfunct);  //sorting a vector descending order
    puts("Sorted vector(descending):");
     for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"\t";
    }
    puts("");

    sort(vec.begin(),vec.begin()+3);  //sorting a vector first 3 element
    puts("Sorted vector(ascending,first three element):");
     for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"\t";
    }
    puts("");
    return 0;
}
