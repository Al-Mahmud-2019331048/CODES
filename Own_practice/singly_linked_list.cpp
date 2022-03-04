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
    //initializes head and tail
    SinglyLinkedList();
    /**
        A value is provided which should be
        added at the begining of the list
        @param val the provided value
    */
    void insertIntoHead(int);
     /**
        A value is provided which should be
        added just after the head of the list
        @param val the provided value
    */
    void insertIntoNextToHead(int);
     /**
        A value is provided which should be
        added at the end of the list
        @param val the provided value
    */
    void insertIntoTail(int);
     /**
        A value is provided which should be
        added just before the tail
        @param val the provided value
    */
    void insertBeforeTail(int);
    /**
        A value is provided which should be
        added at the provided position. If the position
        does not exist,then the value should be added
        at the end of the list. The position is 1-base index
        @param val the provided value
        @param pos the provided position
    */
    void insertAtPos(int val,int pos);
    /**
        A value is provided which should be
        added just after the provided refVal. If the
        refVal does not exist,then the value should
        be added at the end of the list. If refVal exist
        several times ,then val should be added just
        after the first occurance the refVal.
        @param val the provided value
        @param refVal the reference value
    */
    void insertAfterVal(int val,int refVal);
    /**
        A value is provided which should be
        added just before the provided refVal. If the
        refVal does not exist,then the value should
        be added at the end of the list. If refVal exist
        several times ,then val should be added just
        before the first occurance the refVal.
        @param val the provided value
        @param refVal the reference value
    */
    void insertBeforeVal(int val,int refVal);

    /**
        A value is provided.It should be searched in
        the list,then the position of the first occurence
        should return(1-based indexing).If the
        Value does not exist in the list,then -1 should be
        returned.
        @param val the value should be searched
        @return the position of the value in the list if
                it exists,otherwise -1.
    */
    int findPos(int val);
    /**
        A position is provided(1-based position).The value
        at the given position should be returned.
        If the position does not exist in the list,then -1
        should be returned.
        @param pos the provided position
        @return the value at the given position if the position
        exists,otherwise -1.
    */
    int findValAtPos(int pos);
    int findLargestVal();
    int findSmallestVal();

    int deleteFromHead();

    void printList();

};
SinglyLinkedList::SinglyLinkedList(){
    head=NULL;
    tail=NULL;
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
void SinglyLinkedList:: insertIntoHead(int x){
    node *cur=new node(x);
    if(head==NULL){
        head=tail=cur;
        return;
    }
    cur->next=head;
    head=cur;
}

int SinglyLinkedList:: deleteFromHead(){
    if(head==NULL){
        cout<<"Underflow"<<endl;
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
void SinglyLinkedList::printList(){
    cout<<"------List start-------"<<endl;
    if(head==NULL)
        cout<<"Empty List"<<endl;
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    cout<<"------List end--------"<<endl;
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
