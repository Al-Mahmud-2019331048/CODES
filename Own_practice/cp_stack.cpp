#include<iostream>
#define sz 1000

using namespace std;

struct stack{
    int st[sz],top;
    stack(){
        top=-1;
    }

    void push(int x){
        if(top==sz-1){
            cout<<"overflow!"<<endl;
            return;
            }
        st[++top]=x;
        }
    int pop(){
        if(top==-1){
            cout<<"Empty!"<<endl;
            return -1;
        }
        return st[top--];
    }
   int Top(){
        if(top==-1){
            cout<<"Empty!"<<endl;
            return -1;
        }
        cout<<st[top]<<endl;
        return st[top];
   }
};

int main()
{
    stack *st=new stack();
    int T,a,x;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>a;
        if(a==1){
                cin>>x;
                st->push(x);
        }

        if(a==2) st->Top();
        if(a==3) st->pop();
    }
    return 0;
}
