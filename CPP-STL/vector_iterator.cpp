#include<iostream>
#include<vector>
#include<iterator>
#include<stdio.h>

using namespace std;
int main()
{

    vector<int>vec;
    vector<int>::iterator it; //it is an iterator that can access
//                            an int vector's element
//    vector<double>vec1;
//    vector<double>iterator it1;
//
//    vector<char>vec2;
//    vector<char>::iterator it2;

    for(int i=0;i<5;i++)
    {
        vec.push_back(i);
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"\t";
    }
    puts("");
    it=vec.begin(); //it points 1st element of the array
    cout<<*it<<endl;
    it++;  //points 2nd element
    cout<<*it<<endl;
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
