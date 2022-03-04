#include<iostream>
#define sz 100000
struct stack{
    int a[sz],top;
    stack(){
        top=-1;
    }
    void push(int x){
        if(top==sz-1){
            cout <<"overflow!"<< endl;
            return;
        }
        a[++top]=x;
    }
    int Top(){
        if(!(~top){
            cout <<"empty stack!"<< endl;
            return -1;
        }
        return a[top];
    }
    int pop(){
        if(!(~top)){
            cout <<"underflow!"<< endl;
            return -1;

        return a[top--];
    }
    bool empty(){
        return !(~top);
    }
    void printStack(){
        cout<<"start stack-----"<<endl;
        if(!(~top)){
            cout << "empty stack"<<endl;
            return;
        }
        for(int i=top;i>=0;i--)
            cout<<a[i]<<endl;
        cout<<"end stack-----"<<endl;
    }
};
int main()
{
    stack *st=new stack();
    st->printStack();
    st->Top();
    st->pop();
    cout<<st->empty()<<endl;
    st->push(90);
    st->printStack();
    st->pop();
    st->printStack();
    st->pop();
    st->printStack();
    st->push(75);
    st->printStack();
    st->push(45);
    cout << st->empty <<endl;
    st->push(451);
    st->Top();
    delete st;
    return 0;
}
