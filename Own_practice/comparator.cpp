#include<iostream>
#include<stdio.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(int a,int b)  //ascending
{
    //true->a upore jabe
    //false->a niche jabe
    if(a<b) return true;
    else return false;
}
bool cmp1(int a,int b)  //descending
{
    //true->b upore jabe
    //false->b niche jabe
    if(a<b) return false;
    else return true;
}
int main()
{
    int ar[4]={1,9,4,2};
    vector<int>arr(ar,ar+4);
    sort(arr.begin(),arr.end(),cmp1);
    for(int i=0;i<4;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}
