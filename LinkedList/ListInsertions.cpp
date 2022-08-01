#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void Traversal(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
void InsertAtStart(Node** p,int a)
{
    Node* new_node=new Node();
    new_node->next=*p;
    new_node->data=a;
    *p=new_node;  
}
void InsertAtGivenNode(Node* n,int a,int pos)
{
    Node* new_node=new Node();
    int c=1;
    while(c!=pos)
    {
        n=n->next;
        c++;
    }
    Node *p;
    p=n->next;
    n->next=new_node;
    new_node->data=a;
    new_node->next=p;
}
void InsertAtEnd(Node* n,int a)
{
    Node* new_node=new Node();
    while(n->next!=NULL)
    {
        n=n->next;
    }
    n->next=new_node;
    new_node->data=a;
    new_node->next=NULL;
}
int main()
{
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;

    head=new Node();
    second=new Node();
    third=new Node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    int ab;int ch;
    cout<<"Enter data to be inserted ";
    cin>>ab;
    cout<<"Enter your choice:\n1.Insert at the Start.\n2.Insert after a give node\n3.Insert at the End.\n";
    cin>>ch;
    switch(ch)
    {
        case 1:InsertAtStart(&head,ab);
               Traversal(head);
               break;
        case 2:int pos;
               cout<<"Enter position after which you want to insert data";
               cin>>pos;
               InsertAtGivenNode(head,ab,pos);
               Traversal(head);
               break;
        case 3:InsertAtEnd(head,ab);
               Traversal(head);
               break;
        default:cout<<"Enter Valid Choice";
    }
}