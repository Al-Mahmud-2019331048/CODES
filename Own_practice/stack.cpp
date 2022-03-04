#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string>s;

    s.push("mahmud");
    s.push("nazim");
    s.push("jamil");

    //printing stack
    while(!s.empty()){
        string x;
        x=s.top();  //1st element access
        cout<<x<<endl;
        s.pop();  //ist element remove
    }

    return 0;
}
