#include <bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next=NULL;
    }
} *head = NULL, *tail = NULL;


//Deletion
void delAtBeg(int pos){
    Node *toBeDel;
    Node *temp;
    if(pos==1){
        temp=head;
        head=head->next;
        delete temp;
    }
    else{
        temp=head;
        for(int i=0;i<pos;i++){
            toBeDel=temp;
            temp=temp->next;
            if(temp==NULL){
                return;
            }
        }
        toBeDel->next=temp->next;
        //temp->next=head->next;
        delete toBeDel;
    }
}


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
        cout << temp->data <<"->";
        temp = temp->next;
    }
    cout<<endl;
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
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        insertAtBeg();
    }
    printList(head);
    delAtBeg(2);
    printList(head);
}
