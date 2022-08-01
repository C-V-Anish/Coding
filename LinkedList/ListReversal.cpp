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
Node* reversal(Node* n)
{
    Node* current=n;
    Node* next=NULL;Node* prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    n=prev;
    return n;
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

    Traversal(head);
    cout<<"\n";
    Traversal(reversal(head));
}