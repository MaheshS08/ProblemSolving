/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
    }
} *head = NULL, *tail = NULL;

void insertAtBeg()
{
    int data = 0;
    cin >> data;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insertAtEnd()
{
    int data = 0;
    cin >> data;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void printList(Node *head)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "NULL";
    }
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void printReverseList(Node *head)
{
    Node *temp = head;
    if (temp->next == NULL)
    {
        cout << "NULL";
    }
    printReverseList(temp->next);
    cout << temp->data << "->";
}

int main()
{
    insertAtBeg();
    insertAtBeg();
    insertAtBeg();
    printList(head);
}
