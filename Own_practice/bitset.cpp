#include<stdio.h>
#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    bool ar[8];
//    bitset<8>b;
    bitset<8>b(7);  //7->binary value
//    bitset<8>b(string("1101"));
//    b.set() ; //all element 0
//    b.reset(); all element 0

    cout<<b<<endl;
    cout<<b[0]<<endl;  //0th index er value


    return 0;
}
