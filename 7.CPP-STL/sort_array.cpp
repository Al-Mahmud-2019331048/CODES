#include<iostream>
#include<stdio.h>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    int ar[5]={5,2,1,6,3};
    sort(ar,ar+5);  //sorting an array
    for(int i=0;i<5;i++)
    {
        printf("%d\t",ar[i]);
    }
    return 0;
}
