#include<iostream>
using namespace std;

struct node{
    int val;
    node *next;
    node(){  //parametrer na pathale 0 diye initialize hbe
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
    int deleteFromTail();
    void printList();
};

SinglyLinkedList::SinglyLinkedList(){
    head=NULL;
    tail=NULL;
}
void SinglyLinkedList::insertIntoHead(int x){
    node *cur=new node(x);
    if(head==NULL){
            head=tail=cur;
            return;
        }
    cur->next=head;
    head=cur;
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
        cout<<"Underflow"<<endl;
        return -1;
    }
    node *temp=head;
    int ret=temp->val;
    if(head->next==NULL){
        head=tail=NULL;
    }
    else
        head=head->next;
        delete temp;
        return ret;
}


int SinglyLinkedList::deleteFromTail(){

}
void SinglyLinkedList::printList(){
    cout<<"List Start-------------"<<endl;
    if(head==NULL || tail==NULL)
    {
        cout<<"Empty list!"<<endl;
    }
    else{
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<endl;
            temp=temp->next;
        }
    }

    cout<<"List end---------------"<<endl;
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
    sl.insertIntoHead(6);
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
