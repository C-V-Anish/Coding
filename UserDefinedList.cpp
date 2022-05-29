/*#include <iostream>
#include <string>
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
void InsertAtEnd(Node** head,int a)
{
    Node* new_node=new Node();
    Node* temp=*head;
    new_node->data=a;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
  
}
int main()
{
    char choice='y';
    while(toupper(choice)!='N')
    {
        int ab;
        cout<<"Enter data to be inserted\n";
        fflush(stdin);
        cin>>ab;
        Node* head=new Node();
        InsertAtEnd(&head,ab);
        Traversal(head);
        cout<<"\nDo you want to insert more? [y/n]\n";
        fflush(stdin);
        cin>>choice;
    } 
}*/
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