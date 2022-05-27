#include <iostream>
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
void DeleteAtStart(Node** head,Node* n)
{
    *head=n->next;
}
void DeleteAtGivenPosition(Node* n,int pos)
{
    int c=1;
    while(c!=pos-1)
    {
        n=n->next;
        c++;
    }
    Node* p=(n->next)->next;
    n->next=p;
    p=NULL;

}
void DeleteAtEnd(Node* n)
{
    while(((n->next)->next)!=NULL)
    {
        n=n->next;
    }
    n->next=NULL;   
}
int main()
{
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    Node* fourth=NULL;

    head=new Node(); 
    second=new Node();
    third=new Node();
    fourth=new Node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=NULL;

    int ch;
    cout<<"Enter your choice:\n1.Delete at the Start.\n2.Delete after a give node\n3.Delete at the End.\n";
    cin>>ch;
    switch(ch)
    {
        case 1:Traversal(head);
               cout<<"\n";
               DeleteAtStart(&head,head);
               Traversal(head);
               break;
        case 2:int pos;
               cout<<"Enter position after which you want to delete data ";
               cin>>pos;
               Traversal(head);
               cout<<"\n";
               DeleteAtGivenPosition(head,pos);
               Traversal(head);
               break;
        case 3:Traversal(head);
               cout<<"\n";
               DeleteAtEnd(head);
               Traversal(head);
               break;
        default:cout<<"Enter Valid Choice";
    }
}
