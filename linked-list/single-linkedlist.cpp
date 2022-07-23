#include <iostream>

using namespace std;

// Single Node
class Node {
    public:
        int data;
    Node * next;
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
    //Free Memoery Space
    ~Node() {
        int value = this -> data;
        if (this -> next == NULL) {
            delete next;
            this -> next = NULL;
        }
    }
};

// Add new Node at the end of linked list
void AddatTail(Node * & tail, int newdata) {
    Node * temp = new Node(newdata);
    tail -> next = temp;
    tail = temp;
}
// Add new Node at the start of linked list
void AddatHead(Node * & head, int newdata) {
    Node * temp = new Node(newdata);
    temp -> next = head;
    head = temp;
}
// Add new Node at middle/defined position in the list
void AddatPosition(Node * & tail, Node * & head, int position, int newdata) {
    Node * temp = head;
    int count = 1;

    while (count <= position - 1) {
        temp = temp -> next;
        count++;
    }

    if (position == 1) {
        AddatHead(head, newdata);
        return;
    }
    if (temp -> next == NULL) {
        AddatTail(tail, newdata);
        return;
    }

    Node * newNode = new Node(newdata);
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

//Delete Node
void DeleteNode(Node * & head, int position) {
    if (position == 1) {
        Node * temp = head;
        head = head -> next;
        delete head;
    } else {
        Node * current = head;
        Node * prev = NULL;
        int count = 1;
        while (count <= position) {
            prev = current;
            current = current -> next;
            count++;
        }
        prev -> next = current -> next;
        delete current;
    }
}

// Print the whole linkedlist
void printlist(Node * & head) {
    Node * temp = head;
    while (temp != NULL) {
        cout << temp -> data << endl;
        temp = temp -> next;
    }
}
int main() {
    Node * a = new Node(1);

    // Defining Tail and Head of the list
    Node * tail = a;
    Node * head = a;

    // Add new node at the tail
    AddatTail(tail, 2);
    AddatTail(tail, 22);
    AddatTail(tail, 23);
    AddatTail(tail, 27);

    // Add new node at the Head
    AddatHead(head, 98);

    //Add Custom Position
    AddatPosition(tail, head, 6, 55);
    // Print the List
    printlist(head);

    //DeleteNode
    DeleteNode(head, 6);
    cout << "After Deleting List" << endl;
    printlist(head);

    return 0;
}