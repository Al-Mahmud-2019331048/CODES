#include<stdio.h>
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    int ar[6]={1,3,5,8,9,12};
    vector<int> v(ar,ar+5);
//    vector<int>::iterator it=lower_bound=(v.begin(),v.end(),6);
    auto it=lower_bound=(v.begin(),v.end(),6);
    cout<<*it<<endl;
    return 0;
}
