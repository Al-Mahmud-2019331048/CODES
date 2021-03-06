#include<iostream>
using namespace std;

struct node{
    int val;
    node *next;
    node(){
        val=0;
        next=NULL;
    }
    node(int k){
        val=k;
        next=NULL;
    }
};

struct SinglyLinkedList{
    node *head,*tail;

    void insertIntoHead(int);
    void insertIntoTail(int);
    int deleteFromHead();
    void printList();
};

void SinglyLinkedList :: insertIntoHead(int x){
    node *cur=new node(x);
    if(head==NULL){
        head=tail=cur;
        return;
    }
    cur->next=head;
    head=cur;
}

void SinglyLinkedList :: insertIntoTail(int x){
    node *cur=new node(x);
    if(tail==NULL){
        head=tail=cur;
        return;
    }
    tail->next=cur;
    tail=tail->next;
}

int SinglyLinkedList :: deleteFromHead(){

    if(head==NULL){
        cout<<"Underflow!"<<endl;
        return -1;
    }
    node *temp=head;
    int ret=temp->val;
    if(head->next==NULL){
        head=tail=NULL;

    }
    else{
        head=head->next;
        }
    delete temp;
    return ret;
}

void SinglyLinkedList :: printList(){
    cout<<"List Start-------"<<endl;
    if(head==NULL)
        cout<<"EMPTY LIST!"<<endl;
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->val;
        temp=temp->next;
    }

    cout<<"List End---------"<<endl;
}

int main()
{
    SinglyLinkedList sl;
    sl.insertIntoTail(5);
    sl.printList();
    sl.insertIntoTail(56);
    sl.printList();
    sl.insertIntoHead(156);
    sl.printList();
    sl.insertIntoTail(6);
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.insertIntoTail(79);
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.deleteFromHead();
    sl.printList();

    return 0;
}
