#include<iostream>
using namespace std;

#define sz 4

struct queue{
    int q[sz],front,rear;

    queue(){
        front=rear=-1;
    }
    bool empty(){
        return !(~front);
    }

    void push(int x){
        if(rear+1==sz && front==0){
            cout <<"Overflow!" <<endl;
            return;
        }
        if(empty()) front++;
        if(rear+1==sz) rear=-1;
        q[++rear]=x;
    }

    int pop(){
        if(empty()){
            cout << "Underflow!"<<endl;
            return -1;
        }
        int x=q[front++];

        if(front-1 == rear) //ager front & rear equal pointer ki na dekhsi
            front=rear=-1;
        if(front==sz)
            front=0;
        return x;
    }

    int Front(){
        if(empty()){
            cout << "Queue empty!" << endl;
            return -1;
        }
        return q[front];
    }

    void printQueue(){
        cout << "Queue start----------" << endl;
        if(empty()){
            cout << "Empty Queue!" << endl;
            cout << "Queue End  ----------"  << endl;
            return;
        }
        for(int i=front;i!=rear;(i+1==sz && rear!=sz-1)?i=0:i++)
            cout << q[i] << ",";
        cout << q[rear] << endl;
        cout << "Queue End  ----------"  << endl;
    }
};

int main()
{
    queue *q=new queue();
    q->printQueue();
    cout << q->Front() << endl;
    q->pop();
    cout << q->empty() << endl;
    q->push(90);
    q->pop();
    q->pop();
    q->push(75);
    q->printQueue();
    q->push(45);
    q->printQueue();
    cout << q->empty() << endl;
    q->pop();
    q->printQueue();
    q->push(451);
    q->printQueue();
    cout << q->Front() << endl;
    q->push(-98);
    q->printQueue();
    cout << q->Front() << endl;
    q->push(81);
    q->printQueue();
    q->push(31);
    q->pop();
    q->push(61);
    q->printQueue();
    q->pop();
    q->printQueue();
    q->pop();
    q->printQueue();
    cout << q->Front() << endl;
    q->pop();
    q->printQueue();
    cout << q->empty() << endl;
    delete q;
    return 0;
}
