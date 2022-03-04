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

struct singlyLinkedList{
    node *head,*tail;
    singlyLinkedList();
    void insertIntoHead(int);
    void insertIntoTail(int);
    int deleteFromHead();
    void printList();
};

singlyLinkedList :: singlyLinkedList(){
        head=NULL,tail=NULL;
};

void singlyLinkedList :: insertIntoHead(int x){
    node *cur= new node(x);
    if(head==NULL){
            head=tail=cur;
            return;
    }
    cur->next=head;
    head=cur;
}

void singlyLinkedList :: insertIntoTail(int x){
    node *cur= new node(x);
    if(head==NULL){
            head=tail=cur;
            return;
    }
    tail->next=cur;
    tail=cur;
}

int singlyLinkedList :: deleteFromHead(){
    if(head==NULL){
        cout<<"Underflow!"<<endl;
        return -1;
    }
    node *temp=head;
    int ret=temp->val;
    if(head->next==NULL)
        head=tail=NULL;
    else
        head=head->next;
    delete temp;
    return ret;
}

void singlyLinkedList :: printList(){
    if(head==NULL){
        cout<<endl<<endl;
        return;
    }
    cout<<"List Start--------------------"<<endl;
    node *temp=head;
    while (temp != NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    cout<<"List End----------------------"<<endl;

}

int main()
{
    singlyLinkedList sl;
    sl.insertIntoHead(34);
    sl.printList();
    sl.insertIntoHead(5);
    sl.printList();
    sl.insertIntoHead(125);
    sl.printList();
    sl.insertIntoTail(20);
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.insertIntoHead(12);
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    return 0;
}
