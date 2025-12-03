#include <iostream>
using namespace std;

// Define Node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}  // Like constructor  data=val, next=NULL;
};

// Insert at beginning
void insertAtHead(Node*& head, int data) {
    Node* ptr = new Node(data);  
    ptr->next = head;
    head = ptr;
}

// Insert at end
void insertAtTail(Node*& head, int data) {
    Node* new_node = new Node(data);
    if (!head) {   //empty LL
        head = new_node;
        return;
    }
    Node* tmp = head;  //general case
    while (tmp->next) tmp = tmp->next;
    tmp->next = new_node;
}

// Insert after a node with given key
void insertAfterKey(Node* head, int key, int data) {
    Node* curr = head;
    while (curr && curr->data != key) curr = curr->next;
    if (!curr) return;
    Node* new_node = new Node(data);
    new_node->next = curr->next;
    curr->next = new_node;
}

// Insert before a node with given key
void insertBeforeKey(Node*& head, int key, int data) {
    if (!head) return;
    if (head->data == key) {
        insertAtHead(head, data);
        return;
    }
    Node* curr = head;
    while (curr->next && curr->next->data != key) curr = curr->next;
    if (!curr->next) return;
    Node* new_node = new Node(data);
    new_node->next = curr->next;
    curr->next = new_node;
}

// Insert at specific position (1-based)
void insertAtPosition(Node*& head, int pos, int data) {
    if (pos == 1) {
        insertAtHead(head, data);
        return;
    }
    Node* curr = head;
    for (int i = 1; i < pos - 1 && curr; i++) curr = curr->next;
    if (!curr) return;  //out of boundary
    Node* new_node = new Node(data);
    new_node->next = curr->next;
    curr->next = new_node;
}

// Delete head
void deleteHead(Node*& head) {
    if (!head) return;   // ! head ( true if head is null)
    Node* temp = head;
    head = head->next;
    delete temp;
}

// Delete last node
void deleteTail(Node*& head) {
    if (!head) return;
    if (!head->next) {  //single node LL
        delete head;
        head = NULL;
        return;
    }
    Node* curr = head;
    while (curr->next->next) curr = curr->next;
    delete curr->next;
    curr->next = NULL;
}

// Delete node at specific position (1-based)
void deleteAtPosition(Node*& head, int pos) {
    if (!head) return;  //empty LL
    if (pos == 1) {
        deleteHead(head);
        return;
    }
    Node* curr = head;
    for (int i = 1; i < pos - 1 && curr; i++) curr = curr->next;
    if (!curr || !curr->next) return;
    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
}

// Print list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Main with test cases
int main() {
    Node* head = NULL; //creating an empty linked list

    // Insertion tests
    // cout << "Inserting at head: ";
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    // printList(head);  // 10 -> 20 -> 30 -> NULL

    // cout << "Inserting at tail: ";
    insertAtTail(head, 40);
    // insertAtTail(head, 50);
    // printList(head);  // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    // cout << "Insert after key 30: ";
    insertAfterKey(head, 30, 35);
    // printList(head);  // 10 -> 20 -> 30 -> 35 -> 40 -> 50 -> NULL

    // cout << "Insert before key 40: ";
    insertBeforeKey(head, 40, 38);
    // printList(head);  // 10 -> 20 -> 30 -> 35 -> 38 -> 40 -> 50 -> NULL

    // cout << "Insert at position 3: ";
    insertAtPosition(head, 3, 25);
    // printList(head);  // 10 -> 20 -> 25 -> 30 -> 35 -> 38 -> 40 -> 50 -> NULL

    // // Deletion tests
    // cout << "Delete head: ";
    deleteHead(head);
    // printList(head);  // 20 -> 25 -> 30 -> 35 -> 38 -> 40 -> 50 -> NULL

    // cout << "Delete tail: ";
    deleteTail(head);
    printList(head);  // 20 -> 25 -> 30 -> 35 -> 38 -> 40 -> NULL

    cout << "Delete at position 4: ";
    deleteAtPosition(head, 10);
    printList(head);  // 20 -> 25 -> 30 -> 38 -> 40 -> NULL

    return 0;
}

