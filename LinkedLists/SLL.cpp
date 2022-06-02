#include <bits/stdc++.h>

using namespace std;
struct Node
{
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next=NULL;
    }
};
Node*head = NULL, *tail = NULL;


//Deletion
void delAtBeg(int val){
    Node *p=NULL,*c=head;
    // Node *toBeDel;
    // Node *temp;
    // if(pos==1){
    //     temp=head;
    //     head=head->next;
    //     delete temp;
    // }
    // else{
    //     temp=head;
    //     for(int i=0;i<pos;i++){
    //         toBeDel=temp;
    //         temp=temp->next;
    //         if(temp==NULL){
    //             return;
    //         }
    //     }
    //     toBeDel->next=temp->next;
    //     //temp->next=head->next;
    //     delete toBeDel;
    // }
    while(c){
        if(c->val == val){
            if(!p){
                Node *del=head;
                delete head;
            }
            p->next=c->next;
        }
        p=c;
        c=c->next;
    }
}


//Get Middle Element of List

int getMiddleElement(Node *head){
    Node *first=head;
    Node *second=head;
    while(first && first->next && first->next->next ){
        first = first->next->next;
        second = second->next;
    }
    if(first->next==NULL) return second->val;
    else return second->next->val;
}

//Kth Node 

int kthNode(Node *head,int k){
    Node *first=head;
    Node *second=head;
    for(int i=0;i<k;i++){
        if(first==NULL) return -1;
        first = first->next;
    }
    while(first!=NULL){
        first = first->next;
        second = second->next;
    }
    return second->val;
}

//Detect Cycle in List

bool hasCycle(Node *head) {
        Node *first=head;
        Node *second=head;
        while(first && first->next){
            second = second->next;
            first = first->next->next;
            if(second == first)
                return true;
        }
        return false;
}

//Reverse a LINKEDLIST

Node* reverseList(Node* head) {
        Node *prev=NULL,*cur=head,*n;
        while(cur!=NULL){
            n=cur->next;
            cur->next=prev;
            prev=cur;
            cur=n;
        }
        return prev;
}

//CLONE LINKEDLIST
Node* cloneLL(Node* head){
    if(head==NULL) return NULL;
    Node *newNode = new Node(head->val);
    newNode->next = cloneLL(head->next);
    return newNode;
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
        newNode->next=head;
        head = newNode;
    }
}

void insertAtEnd()
{
    int val = 0;
    cin >> val;
    Node *newNode = new Node(val);
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

void printList(Node* head)
{
    if(head==NULL) return;
    cout<<head->val<<" ";
    printList(head->next);
    cout<<endl;
}

void printReverseList(Node* head)
{
    if(head==NULL) return;
    cout<<endl;
    printReverseList(head->next);
    cout << head->val << " ";
    
}

int main()
{
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        insertAtBeg();
    }
    printList(head);
    //delAtBeg(2);
    //Node *cloned = cloneLL(head);
    Node *reverse = reverseList(head);
    printList(reverse);
    //cout<<endl<<hasCycle(head);
    //printReverseList(cloned);
}

