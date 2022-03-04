#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>p;
    p.push(100);
    p.push(14);
    p.push(-6);
    p.push(230);
    p.push(48);
    while(!p.empty()){
        int x;
        x=p.top();
        cout<<x<<endl;
        p.pop();


    }

    return 0;
}
