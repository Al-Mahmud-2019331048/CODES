#include<iostream>
using namespace std;

struct node{
    string val;
    node *prev;

    node(){
        val="";
        prev=NULL;
        }
    node(string x){
        val=x;
        prev=NULL;
        }
};

struct Stack{
    node *top=NULL;
    Stack(){
        top=NULL;
    }

    void push(string);
    string pop();
    string Top();
    bool empty();
    void printStack();
    int Size();
};

void Stack :: push(string x)
{
    node *cur= new node(x);
    if(top!=NULL)
        cur->prev=top;
    top=cur;
}

string Stack :: pop()
{
    node *temp=top;
    if(top==NULL){
//        cout<< "Underflow!\n";
        return "";
    }
    top=top->prev;
    string ret=temp->val;
    delete temp;
    return ret;
}

string Stack :: Top()
{
    if(top==NULL){
        cout<<"Empty stack!"<<endl;
        return "";
    }
    return top->val;
}

bool Stack :: empty()
{
    return top==NULL;
}

int Stack::Size()
{
    int i;
    while(top!=NULL){
        top=top->prev;
        i++;
    }
    return i;
}

int main()
{
    Stack *st = new Stack();
    cout <<"Empty1 = " << st->empty() << endl;
    st->push("65");
    st->push("6");
    st->push("+");
    cout <<"Top = " << st->Top() << endl;
    cout <<"Empty2 = " << st->empty() << endl;
    st->push("105");
     cout <<"size = " << st->Size() << endl;
    for (int i = 0; i<5; i++)
        cout << i << ":" << st->pop() << endl;
    cout <<"Empty3 = " << st->empty() << endl;
    cout <<"Empty4 = " << st->Top() << endl;

    return 0;
}
