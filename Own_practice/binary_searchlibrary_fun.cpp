#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>  //binary_search
using namespace std;

int main()
{
    int ar[6]={1,3,5,8,9,12};
    vector<int> v(ar,ar+5);
    bool ans=binary_search(v.begin(),v.end(),5); //from 1st to last we want to search 5,,returns bool type
    if(ans) cout<<"found"<<endl;
    else cout<<"not found"<<endl;
    return 0;
}
