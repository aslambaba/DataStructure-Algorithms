#include <iostream>
using namespace std;

//Creating New Node
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        this->data = d;
        next = NULL;
        prev = NULL;
    }
};

//Add New Node into Tail of Doubly LinkedList
void AddAttail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
//Add New Node into Head of Doubly LinkedList
void AddAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
//Add New Node of UserDefine Position in Doubly LinkedList
void AddAtPosition(Node *&head, Node *&tail, int data, int position)
{
    Node *newNode = new Node(data);
    Node *temp = head;
    int cont = 1;
    while (temp != NULL)
    {
        if (position == 1)
        {
            AddAtHead(head, data);
            break;
        }
        else if (temp->next == NULL)
        {
            AddAttail(tail, data);
            break;
        }
        else if (cont == position)
        {
            Node *prevNode = temp->prev;
            newNode->next = temp;
            temp->prev = newNode;
            prevNode->next = newNode;
            newNode->prev = prevNode;
            break;
        }
        cont = cont + 1;
        temp = temp->next;
    }
}
//Delete Node of UserDefine position from Doubly LinkedList
void DeleteAtPosition(Node *&head, Node *&tail, int position)
{
    Node *temp = head;
    int cont = 1;
    while (temp != NULL)
    {
        if (position == 1)
        {
            Node *newNodehead = temp->next;
            newNodehead->prev = NULL;
            head = newNodehead;
            break;
        }
        else if (temp->next == NULL)
        {
            Node *newTailNode = temp->prev;
            newTailNode->next = NULL;
            tail = newTailNode;
        }
        else if (cont == position)
        {
            Node *prevNode = temp->prev;
            Node *nextNode = temp->next;

            prevNode->next = temp->next;
            nextNode->prev = temp->prev;

            break;
        }
        cont++;
        temp = temp->next;
    }
}
// Print Doubly LinkedList from start
void PrintListFromStart(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
// Print Doubly LinkedList from end
void PrintListFromEnd(Node *&tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->prev;
    }
}

int main()
{
    Node *One = new Node(55);
    Node *head = One;
    Node *tail = One;

    AddAttail(tail, 2);
    AddAttail(tail, 24);

    AddAtHead(head, 36);
    AddAtHead(head, 34);

    AddAtPosition(head, tail, 69, 6);
    AddAtPosition(head, tail, 22, 3);
    AddAtPosition(head, tail, 44, 2);

    PrintListFromStart(head);
    // cout<<"Print From Last"<<endl;
    // PrintListFromEnd(tail);

    DeleteAtPosition(head, tail, 8);
    cout << "After Deleting Node" << endl;
    PrintListFromStart(head);

    return 0;
}