 #include <iostream>
#define sz 3
using namespace std;

struct queue{
    int q[sz], front, rear;
    queue(){
        front=rear=-1;
    }
    bool empty(){
        return !(~front);
    }
    void push(int x){
        if(rear+1==sz){
            cout << "Overflow!" << endl;
            return;
        }
        if(empty()) front++;
        q[++rear] = x;
    }

    int pop(){
        if(empty()){
            cout << "Underflow!" << endl;
            return -1;
        }
        int x = q[front++];
        if(front-1 == rear){
            front = rear = -1;
        }
        return x;
    }

    int Front(){
        if(empty()){
            cout <<"Queue Empty!" << endl;
            return -1;
        }
        return q[front];
    }
    void printQueue(){
        cout << "Start Queue ------------" << endl;
        if(empty()){
            cout << "Empty Queue!" << endl;
            cout << "End Queue   ------------" << endl;
            return;
        }
        for (int i = front; i<= rear; i++)
            cout << q[i] <<  ",\n" [i==rear];
        cout << "End Queue   ------------" << endl;
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
    q->pop();
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
