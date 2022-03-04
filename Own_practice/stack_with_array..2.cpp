#include<iostream>
#define sz 100000
using namespace std;

struct stack{
    int a[sz],top;

    stack(){
        top=-1;
    }
    void push(int x){
        if(top==sz-1){
            cout<<"Overflow!"<<endl;
            return;
        }
        a[++top]=x;
    }
    int Top(){
        if(!(~top)){
            cout<<"Empty stack!"<<endl;
            return -1;
        }
        return a[top];
//        cout<<"Top item:"<<a[top]<<endl;
    }
    int pop(){
        if(!(~top)){
            cout<<"Underflow!"<<endl;
            return -1;
        }
        return a[top--];
    }
    bool empty(){
        return !(~top);
    }
    void printlist(){
        cout<<"----Stack start-----"<<endl;
        if(!(~top)){
            cout<<"Empty stack"<<endl;
            return;
        }
        for(int i=top;i>=0;i--)
            cout<<a[i]<<endl;
        cout<<"-----End stack-----"<<endl;
    }
};

int main()
{
    stack *st=new stack();
    st->printlist();
    st->Top();
    st->pop();
    st->push(34);
    st->printlist();
    st->push(48);
    st->printlist();
    st->push(100);
    st->printlist();
    st->push(101);
    st->printlist();
    st->pop();
    st->printlist();
    st->Top();
    return 0;
}
