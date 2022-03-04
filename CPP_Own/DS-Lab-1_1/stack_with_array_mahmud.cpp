#include<iostream>
using namespace std;

#define sz 100000

struct stack{
    int a[sz],top;
    stack(){
        top=-1;
    }
    void push(int x){
        if(top==sz-1){
            cout<< "Overflow!" << endl;
            return;
        }
        a[++top]=x;
    }
    int pop(){
        if(!(~top)){
            cout<< "Underflow!" << endl;
            return -1;
        }
        return a[top--];
    }
    int Top(){
        if(!(~top)){
            cout<< "Empty stack!" << endl;
            return -1;
        }
//        cout<< a[top] << endl;
        return a[top];
    }
    bool empty(){
        return !(~top);
    }

    void printStack(){
        cout<< "Stack start----------" << endl;
        if(!(~top)){
            cout << "Empty stack!" << endl;
            cout<< "Stack End   ----------" << endl;
            return;
        }
        for(int i=top;i>=0;i--)
            cout << a[i] << ",\n"[i==0];
        cout<< "Stack End   ----------" << endl;
    }
};

int main()
{
    stack *st= new stack();
    cout << st->empty() << endl;
    cout << st->pop() << endl;
    cout << st->Top() << endl;
    st->printStack();
    st->push(100);
    st->printStack();
    st->push(40);
    st->printStack();
    st->push(23);
    st->printStack();
    cout << st->empty() << endl;
    cout << st->pop() << endl;
    st->printStack();
    st->push(45);
    cout << st->Top() << endl;
    st->printStack();
    st->push(223);
    st->printStack();
    cout << st->pop() << endl;
    st->printStack();
    cout << st->pop() << endl;
    cout << st->Top() << endl;
    st->printStack();
    cout << st->pop() << endl;
    st->printStack();
    cout << st->pop() << endl;
    st->printStack();
    cout << st->empty() << endl;
    cout << st->pop() << endl;

    delete st;
    return 0;
}
