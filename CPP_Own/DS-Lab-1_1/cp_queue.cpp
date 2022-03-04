#include<iostream>
#define sz 1000

using namespace std;

struct queue{
    int q[sz],front,rear;
    queue(){
        front=rear=-1;
    }
    void Enqueue(int x){
        if(rear==sz-1){
            cout<<"Overflow!"<<endl;
            return;
        }
        if(empty())  front++;
        q[rear++]=x;
    }
    int Dequque(){
        if(empty()){
            cout<<"Underflow!"<<endl;
            return -1;
        }
        x=q[front++];
    }
    int top(){

    }

    bool empty()
        return !(~rear)
};
int main()
{

    return 0;
}
