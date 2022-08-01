#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void InsertAtEnd(Node** head,int a)
{
    Node* n=new Node();
    n->data=a;
    n->next=NULL;
    if(*head==NULL)
    {
        *head=n;
        return;
    }
    Node* temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    return;
}
void Traversal(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main(){
    Node* head=NULL;
    char ch;
    int a;
    cout<<"Do you want to Enter Elements [y/n]\n";
    fflush(stdin);
    cin>>ch;
    while(ch == 'y')
    {
        cout<<"Enter element to be inserted:\n";
        cin>>a;
        fflush(stdin);
        InsertAtEnd(&head,a);
        cout<<"Do you want to insert more?[y/n] \n";
        fflush(stdin);
        cin>>ch;
    }
    Traversal(head);
    return 0;
}