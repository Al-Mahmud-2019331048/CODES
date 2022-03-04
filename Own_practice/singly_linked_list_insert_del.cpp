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
    SinglyLinkedList();
    void insertIntoHead(int);
    void insertIntoTail(int);
    int deleteFromHead();
    void printList();
};
SinglyLinkedList::SinglyLinkedList(){
    head=NULL;
    tail=NULL;
}
void SinglyLinkedList::insertIntoHead(int x){

}
void SinglyLinkedList::insertIntoTail(int x){
    node *cur=new node(x);
    if(tail==NULL){
        head=tail=cur;
        return;
    }
    tail->next=cur;
    tail=tail->next;
}
int SinglyLinkedList::deleteFromHead(){
    if(head==NULL){
        cout<<"underflow"<<endl;
        return -1;
    }
    node *temp=head;
    int ret=temp->val;
    if(head->next==NULL){
        head=tail=NULL;
        delete temp;
        return ret;
    }
    else{
        head=head->next;
    }
    delete temp;
    return ret;
}
void SinglyLinkedList::printList(){

}

int main()
{
    SinglyLinkedList sl;
    sl.insertIntoHead(8);
    sl.printList();
    sl.insertIntoTail(34);
    sl.printList();
    sl.deleteFromHead();
    sl.printList();

    return 0;
}
